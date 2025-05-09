---
title: Sensor Rotation
sidebar_label: Sensor Rotation
---

## Summary

The Sensor Rotation behavior triggers a different behavior, depending on whether the sensor is rotated clockwise or counter-clockwise. Two variants of this behavior are available, allowing either fully specifying the
two behaviors and their parameters together, or allowing binding the sensor rotation with different clockwise and counterclockwise parameters in the keymap itself.

## Sensor Rotation

The standard sensor rotation behavior allows fully binding behaviors to be invoked:

- If rotated clockwise, the first bound behavior is triggered.
- If rotated counter-clockwise, the second bound behavior is triggered.

### Configuration

<<<<<<< HEAD:docs/docs/behaviors/sensor-rotate.md
Here is an example that binds the [RGB Underglow Behavior](/docs/behaviors/underglow.md) to change the RGB brightness:
=======
Here is an example that binds the [RGB Underglow Behavior](underglow.md) to change the RGB brightness:
>>>>>>> 4235c8b491b32565850efd296a2f4199dbbc4d90:docs/docs/keymaps/behaviors/sensor-rotate.md

```dts
/ {
    behaviors {
        rgb_encoder: rgb_encoder {
            compatible = "zmk,behavior-sensor-rotate";
<<<<<<< HEAD:docs/docs/behaviors/sensor-rotate.md
            label = "RGB_ENCODER";
=======
>>>>>>> 4235c8b491b32565850efd296a2f4199dbbc4d90:docs/docs/keymaps/behaviors/sensor-rotate.md
            #sensor-binding-cells = <0>;
            bindings = <&rgb_ug RGB_BRI>, <&rgb_ug RGB_BRD>;
        };
    };

    keymap {
        compatible = "zmk,keymap";

        base {
            ...
            sensor-bindings = <&rgb_encoder>;
        }
    };
};
```

## Variable Sensor Rotation

The variable sensor rotation behavior is configured with two behaviors that each expect a single parameter,
allowing the sensor rotation instance to be bound with two parameters at usage time.

- If rotated clockwise, the first bound behavior is triggered with the first parameter passed to the sensor rotation.
- If rotated counter-clockwise, the second bound behavior is triggered with the second parameter passed to the sensor rotation.

### Configuration

Here is an example, showing how send key presses on rotation:

<<<<<<< HEAD:docs/docs/behaviors/sensor-rotate.md
First, defining the sensor rotation itself, binding the [Key Press Behavior](/docs/behaviors/key-press.md) twice, then binding it in the `sensor-bindings` property of a keymap layer:
=======
First, defining the sensor rotation itself, binding the [Key Press Behavior](key-press.md) twice, then binding it in the `sensor-bindings` property of a keymap layer:
>>>>>>> 4235c8b491b32565850efd296a2f4199dbbc4d90:docs/docs/keymaps/behaviors/sensor-rotate.md

```dts
/ {
    behaviors {
<<<<<<< HEAD:docs/docs/behaviors/sensor-rotate.md
        rot_kp: behavior_sensor_rotate_kp {
            compatible = "zmk,behavior-sensor-rotate-var";
            label = "ENC_KP";
=======
        rot_kp: sensor_rotate_kp {
            compatible = "zmk,behavior-sensor-rotate-var";
>>>>>>> 4235c8b491b32565850efd296a2f4199dbbc4d90:docs/docs/keymaps/behaviors/sensor-rotate.md
            #sensor-binding-cells = <2>;
            bindings = <&kp>, <&kp>;
        };
    };

    keymap {
        compatible = "zmk,keymap";
        base {
            ...
            sensor-bindings = <&rot_kp PG_UP PG_DN>;
        }
    }
};
```
