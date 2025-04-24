# REVIUNG34

REVIUNG34 is a 33-34 key unibody split keyboard by [gtips](https://github.com/gtips). An in-stock version can be found at [Little Keyboards](https://www.littlekeyboards.com/products/reviung34-analyst-keyboard-kit).

By default, the 2x1u layout is used. To use to the 1x2u layout, add the following to your keymap:

```
/ {
    chosen {
<<<<<<< HEAD
        zmk,matrix_transform = &single_2u_transform;
=======
        zmk,matrix-transform = &single_2u_transform;
>>>>>>> 4235c8b491b32565850efd296a2f4199dbbc4d90
    };
};
```
