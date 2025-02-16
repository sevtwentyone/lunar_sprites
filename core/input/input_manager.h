#ifndef INPUT_MANAGER_H
#define INPUT_MANAGER_H

#include "core/events/event_manager.h"
#include "core/input/keycodes.h"
#include "core/types/typedefs.h"
#include "core/types/vector/vector2.h"

typedef struct InputManager InputManager;

InputManager *ls_create_input_manager(const EventManager *event_manager);
void input_manager_destroy(InputManager *input_manager);

void input_poll(InputManager *input_manager);

void input_handle_press(InputManager *input_manager, const LSWindow *window, LSKeycode keycode);
void input_handle_release(InputManager *input_manager, const LSWindow *window, LSKeycode keycode);

void input_handle_mouse_press(InputManager *input_manager, const LSWindow *window, LSMouseButton button, Vector2i position);
void input_handle_mouse_release(InputManager *input_manager, const LSWindow *window, LSMouseButton button, Vector2i position);
void input_handle_mouse_move(InputManager *input_manager, const LSWindow *window, Vector2i position);
void input_handle_mouse_enter(InputManager *input_manager, const LSWindow *window, Vector2i position);
void input_handle_mouse_leave(InputManager *input_manager, const LSWindow *window, Vector2i position);

bool input_is_key_pressed(const InputManager *input_manager, LSKeycode keycode);
bool input_is_key_just_pressed(const InputManager *input_manager, LSKeycode keycode);
bool input_is_key_released(const InputManager *input_manager, LSKeycode keycode);
bool input_is_key_just_released(const InputManager *input_manager, LSKeycode keycode);

bool input_is_mouse_pressed(const InputManager *input_manager, LSMouseButton button);
bool input_is_mouse_just_pressed(const InputManager *input_manager, LSMouseButton button);
bool input_is_mouse_released(const InputManager *input_manager, LSMouseButton button);
bool input_is_mouse_just_released(const InputManager *input_manager, LSMouseButton button);

Vector2i input_get_mouse_position(const InputManager *input_manager);

#endif // INPUT_MANAGER_H