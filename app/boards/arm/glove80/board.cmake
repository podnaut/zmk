# Copyright (c) 2021 The ZMK Contributors
# SPDX-License-Identifier: MIT

board_runner_args(nrfjprog "--nrf-family=NRF52" "--softreset")
<<<<<<< HEAD
include(${ZEPHYR_BASE}/boards/common/blackmagicprobe.board.cmake)
=======
include(${ZEPHYR_BASE}/boards/common/uf2.board.cmake)
>>>>>>> 4235c8b491b32565850efd296a2f4199dbbc4d90
include(${ZEPHYR_BASE}/boards/common/nrfjprog.board.cmake)
