#include <vector>
#include <iostream> // For error handling (optional)
#include <GLFW/glfw3.h> // Modern graphics library (GLFW)
#include <glad/glad.h>  // OpenGL loading (optional, but recommended for error checking)
#include <glm/vec2.hpp> // Include header for glm::vec2

const int NUM_PARTICLES = 100;

struct Particle {
   glm::vec2 position; // Use glm::vec2 for position
   glm::vec2 velocity; // Use glm::vec2 for velocity
   glm::vec2 acceleration; // Use glm::vec2 for acceleration
   float mass;
   float radius;
   float density; // Optional
   float pressure; // Optional
   float viscosity; // Optional
   float color[3] = {1.0f, 1.0f, 1.0f}; // Color
};
// Using raw array and size for efficiency and clarity
Particle particles_data[NUM_PARTICLES];


Particle* particles = reinterpret_cast<Particle*>(particles_data);

// Function prototypes
void initialize();
void updatePhysics(float dt);
void render();

// GLFW window and context
GLFWwindow* window;

// Function to handle errors during GLFW initialization
static void error_callback(int error, const char* description) {
  fprintf(stderr, "Error: %s\n", description);
}

int main(int argc, char** argv) {
  std::cout << "Initializing fluid simulation..." << std::endl;

  if (!particles) {
    std::cerr << "Error allocating memory for particles." << std::endl;
    return -1;
  }

  // Initialize GLFW and set error callback
  glfwSetErrorCallback(error_callback);
  if (!glfwInit()) {
    std::cerr << "Failed to initialize GLFW." << std::endl;
    return -1;
  }

  // Create a GLFW window
  window = glfwCreateWindow(800, 600, "Fluid Simulator 2D", NULL, NULL);
  if (!window) {
    glfwTerminate();
    std::cerr << "Failed to create GLFW window." << std::endl;
    return -1;
  }

  // Make the window the current context
  glfwMakeContextCurrent(window);

  // Load OpenGL functions using GLAD (optional, but recommended for error checking)
  if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
    std::cerr << "Failed to load OpenGL functions." << std::endl;
    return -1;
  }

  // Initialize particles and physics
  initialize();

  // Set up rendering loop
  while (!glfwWindowShouldClose(window)) {
    // Update physics
    updatePhysics(0.01f); // Replace with appropriate time step

    // Clear the screen
    glClear(GL_COLOR_BUFFER_BIT);

    // Render particles
    render();

    // Swap buffers and poll for events
    glfwSwapBuffers(window);
    glfwPollEvents();
  }

  // Clean up resources
  glfwTerminate();

  return 0;
}

// Function implementations

void initialize() {
  // Set initial particle positions and velocities (replace with your desired distribution)
  float spacing = 8.0f / NUM_PARTICLES;
  for (int i = 0; i < NUM_PARTICLES; ++i) {
    particles[i].position = glm::vec2(i * spacing, 0.0f);
    particles[i].velocity = glm::vec2(0.0f, 0.0f);
    particles[i].mass = 1.0f;
    particles[i].radius = 0.1f;
  }
}

void updatePhysics(float dt) {
  // Simple gravity force (replace with your desired physics)
  const glm::vec2 gravity(0.0f, -9.8f);

  for (int i = 0; i < NUM_PARTICLES; ++i) {
    // Update acceleration based on forces
    particles[i].acceleration = gravity / particles[i].mass;

    // Update velocity based on acceleration and time step
    particles[i].velocity += particles[i].acceleration * dt;

    // Update position based on velocity and time step
