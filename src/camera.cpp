#include "camera.hpp"

Vector2 camera_center{0.0, 0.0};

Camera2D get_camera() {
    Camera2D camera;

    camera.offset = {0.0, 0.0};
    camera.zoom = 1.0;
    camera.rotation = 0.0;
    camera.target = camera_center;

    return camera;
}
