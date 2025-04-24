# Copyright (c) 2022 The ZMK Contributors
# SPDX-License-Identifier: MIT

zephyr_include_directories(.)

zephyr_library()

<<<<<<< HEAD
zephyr_library_sources_ifdef(CONFIG_MAX17048  max17048.c)
zephyr_library_sources_ifndef(CONFIG_MAX17048 ${ZEPHYR_BASE}/misc/empty_file.c)
=======
zephyr_library_sources_ifdef(CONFIG_ZMK_MAX17048  max17048.c)
zephyr_library_sources_ifndef(CONFIG_ZMK_MAX17048 ${ZEPHYR_BASE}/misc/empty_file.c)
>>>>>>> 4235c8b491b32565850efd296a2f4199dbbc4d90
