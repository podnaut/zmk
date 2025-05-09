---
title: Output Selection Behavior
sidebar_label: Output Selection
---

## Summary

The output behavior allows selecting whether keyboard output is sent to the
USB or bluetooth connection when both are connected. This allows connecting a
keyboard to USB for power but outputting to a different device over bluetooth.

By default, output is sent to USB when both USB and BLE are connected.
Once you select a different output, it will be remembered until you change it again.

:::note[Powering the keyboard via USB]
ZMK is not always able to detect if the other end of a USB connection accepts keyboard input or not.
So if you are using USB only to power your keyboard (for example with a charger or a portable power bank), you will want
to select the BLE output through below behavior to be able to send keystrokes to the selected bluetooth profile.
:::

## Output Command Defines

Output command defines are provided through the [`dt-bindings/zmk/outputs.h`](https://github.com/zmkfirmware/zmk/blob/main/app/include/dt-bindings/zmk/outputs.h)
header, which is added at the top of the keymap file:

```dts
#include <dt-bindings/zmk/outputs.h>
```

This allows you to reference the actions defined in this header:

| Define    | Action                                          |
| --------- | ----------------------------------------------- |
| `OUT_USB` | Prefer sending to USB                           |
| `OUT_BLE` | Prefer sending to the current bluetooth profile |
| `OUT_TOG` | Toggle between USB and BLE                      |

## Output Selection Behavior

The output selection behavior changes the preferred output on press.

### Behavior Binding

- Reference: `&out`
- Parameter #1: Command, e.g. `OUT_BLE`

<<<<<<< HEAD:docs/docs/behaviors/outputs.md
:::note External power state persistence
The endpoint that is selected by the `&out` behavior will be saved to flash storage and hence persist across restarts and firmware flashes.
However it will only be saved after [`CONFIG_ZMK_SETTINGS_SAVE_DEBOUNCE`](../config/system.md#general) milliseconds in order to reduce potential wear on the flash memory.
=======
:::note[Output selection persistence]
The endpoint that is selected by the `&out` behavior will be saved to flash storage and hence persist across restarts and firmware flashes.
However it will only be saved after [`CONFIG_ZMK_SETTINGS_SAVE_DEBOUNCE`](../../config/system.md#general) milliseconds in order to reduce potential wear on the flash memory.
>>>>>>> 4235c8b491b32565850efd296a2f4199dbbc4d90:docs/docs/keymaps/behaviors/outputs.md
:::

### Examples

1. Behavior binding to prefer sending keyboard output to USB

   ```dts
   &out OUT_USB
   ```

1. Behavior binding to prefer sending keyboard output to the current bluetooth profile

   ```dts
   &out OUT_BLE
   ```

1. Behavior binding to toggle between preferring USB and BLE

   ```dts
   &out OUT_TOG
   ```
