/*
 * Copyright (c) 2021 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#define DT_DRV_COMPAT zmk_behavior_mouse_key_press

#include <zephyr/device.h>
#include <drivers/behavior.h>
#include <zephyr/logging/log.h>

#include <zmk/behavior.h>
<<<<<<< HEAD
#include <zmk/event_manager.h>
#include <zmk/events/mouse_button_state_changed.h>
=======
#include <zmk/hid.h>
#include <zephyr/input/input.h>
#include <zephyr/dt-bindings/input/input-event-codes.h>
>>>>>>> 4235c8b491b32565850efd296a2f4199dbbc4d90

LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#if DT_HAS_COMPAT_STATUS_OKAY(DT_DRV_COMPAT)

<<<<<<< HEAD
static int behavior_mouse_key_press_init(const struct device *dev) { return 0; };
=======
static void process_key_state(const struct device *dev, int32_t val, bool pressed) {
    for (int i = 0; i < ZMK_HID_MOUSE_NUM_BUTTONS; i++) {
        if (val & BIT(i)) {
            WRITE_BIT(val, i, 0);
            input_report_key(dev, INPUT_BTN_0 + i, pressed ? 1 : 0, val == 0, K_FOREVER);
        }
    }
}
>>>>>>> 4235c8b491b32565850efd296a2f4199dbbc4d90

static int on_keymap_binding_pressed(struct zmk_behavior_binding *binding,
                                     struct zmk_behavior_binding_event event) {
    LOG_DBG("position %d keycode 0x%02X", event.position, binding->param1);

<<<<<<< HEAD
    return ZMK_EVENT_RAISE(
        zmk_mouse_button_state_changed_from_encoded(binding->param1, true, event.timestamp));
=======
    process_key_state(zmk_behavior_get_binding(binding->behavior_dev), binding->param1, true);

    return 0;
>>>>>>> 4235c8b491b32565850efd296a2f4199dbbc4d90
}

static int on_keymap_binding_released(struct zmk_behavior_binding *binding,
                                      struct zmk_behavior_binding_event event) {
    LOG_DBG("position %d keycode 0x%02X", event.position, binding->param1);
<<<<<<< HEAD
    return ZMK_EVENT_RAISE(
        zmk_mouse_button_state_changed_from_encoded(binding->param1, false, event.timestamp));
=======

    process_key_state(zmk_behavior_get_binding(binding->behavior_dev), binding->param1, false);

    return 0;
>>>>>>> 4235c8b491b32565850efd296a2f4199dbbc4d90
}

static const struct behavior_driver_api behavior_mouse_key_press_driver_api = {
    .binding_pressed = on_keymap_binding_pressed, .binding_released = on_keymap_binding_released};

#define MKP_INST(n)                                                                                \
<<<<<<< HEAD
    DEVICE_DT_INST_DEFINE(n, behavior_mouse_key_press_init, NULL, NULL, NULL, APPLICATION,         \
                          CONFIG_KERNEL_INIT_PRIORITY_DEFAULT,                                     \
                          &behavior_mouse_key_press_driver_api);
=======
    BEHAVIOR_DT_INST_DEFINE(n, NULL, NULL, NULL, NULL, POST_KERNEL,                                \
                            CONFIG_KERNEL_INIT_PRIORITY_DEFAULT,                                   \
                            &behavior_mouse_key_press_driver_api);
>>>>>>> 4235c8b491b32565850efd296a2f4199dbbc4d90

DT_INST_FOREACH_STATUS_OKAY(MKP_INST)

#endif /* DT_HAS_COMPAT_STATUS_OKAY(DT_DRV_COMPAT) */
