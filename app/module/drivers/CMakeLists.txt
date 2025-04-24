# Copyright (c) 2020 The ZMK Contributors
# SPDX-License-Identifier: MIT

add_subdirectory_ifdef(CONFIG_GPIO gpio)
add_subdirectory_ifdef(CONFIG_KSCAN kscan)
add_subdirectory_ifdef(CONFIG_SENSOR sensor)
add_subdirectory_ifdef(CONFIG_DISPLAY display)
<<<<<<< HEAD
=======
add_subdirectory_ifdef(CONFIG_INPUT input)
>>>>>>> 4235c8b491b32565850efd296a2f4199dbbc4d90
