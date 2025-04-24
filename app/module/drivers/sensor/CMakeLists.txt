# Copyright (c) 2020-2021 The ZMK Contributors
# SPDX-License-Identifier: MIT

add_subdirectory_ifdef(CONFIG_ZMK_BATTERY battery)
add_subdirectory_ifdef(CONFIG_EC11 ec11)
<<<<<<< HEAD
add_subdirectory_ifdef(CONFIG_MAX17048 max17048)
=======
add_subdirectory_ifdef(CONFIG_ZMK_MAX17048 max17048)

add_subdirectory_ifdef(CONFIG_ZMK_SENSOR_ENCODER_MOCK encoder_mock)
>>>>>>> 4235c8b491b32565850efd296a2f4199dbbc4d90
