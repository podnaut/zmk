/*
 * Copyright (c) 2022 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#define DT_DRV_COMPAT zmk_behavior_sensor_rotate_var

#include <zephyr/device.h>

#include <drivers/behavior.h>

#include "behavior_sensor_rotate_common.h"

static const struct behavior_driver_api behavior_sensor_rotate_var_driver_api = {
    .sensor_binding_accept_data = zmk_behavior_sensor_rotate_common_accept_data,
    .sensor_binding_process = zmk_behavior_sensor_rotate_common_process};

<<<<<<< HEAD
static int behavior_sensor_rotate_var_init(const struct device *dev) { return 0; };

#define SENSOR_ROTATE_VAR_INST(n)                                                                  \
    static struct behavior_sensor_rotate_config behavior_sensor_rotate_var_config_##n = {          \
        .cw_binding = {.behavior_dev = DT_PROP(DT_INST_PHANDLE_BY_IDX(n, bindings, 0), label)},    \
        .ccw_binding = {.behavior_dev = DT_PROP(DT_INST_PHANDLE_BY_IDX(n, bindings, 1), label)},   \
=======
#define SENSOR_ROTATE_VAR_INST(n)                                                                  \
    static struct behavior_sensor_rotate_config behavior_sensor_rotate_var_config_##n = {          \
        .cw_binding = {.behavior_dev = DEVICE_DT_NAME(DT_INST_PHANDLE_BY_IDX(n, bindings, 0))},    \
        .ccw_binding = {.behavior_dev = DEVICE_DT_NAME(DT_INST_PHANDLE_BY_IDX(n, bindings, 1))},   \
>>>>>>> 4235c8b491b32565850efd296a2f4199dbbc4d90
        .tap_ms = DT_INST_PROP(n, tap_ms),                                                         \
        .override_params = true,                                                                   \
    };                                                                                             \
    static struct behavior_sensor_rotate_data behavior_sensor_rotate_var_data_##n = {};            \
<<<<<<< HEAD
    DEVICE_DT_INST_DEFINE(                                                                         \
        n, behavior_sensor_rotate_var_init, NULL, &behavior_sensor_rotate_var_data_##n,            \
        &behavior_sensor_rotate_var_config_##n, APPLICATION, CONFIG_KERNEL_INIT_PRIORITY_DEFAULT,  \
        &behavior_sensor_rotate_var_driver_api);
=======
    BEHAVIOR_DT_INST_DEFINE(n, NULL, NULL, &behavior_sensor_rotate_var_data_##n,                   \
                            &behavior_sensor_rotate_var_config_##n, POST_KERNEL,                   \
                            CONFIG_KERNEL_INIT_PRIORITY_DEFAULT,                                   \
                            &behavior_sensor_rotate_var_driver_api);
>>>>>>> 4235c8b491b32565850efd296a2f4199dbbc4d90

DT_INST_FOREACH_STATUS_OKAY(SENSOR_ROTATE_VAR_INST)
