```dts
    keymap {
        compatible = "zmk,keymap";

<<<<<<< HEAD
        default_layer {
// --------------------------------------------------------------------------------------------------------------------------------------------------------------------
// |   ESC   |    Q    |    W    |    E    |    R    |    T    |                                          |    Y    |    U    |    I    |    O    |    P    |    \    |
// |   TAB   |    A    |    S    |    D    |    F    |    G    |                                          |    H    |    J    |    K    |    L    |    ;    |    '    |
// |  SHIFT  |    Z    |    X    |    C    |    V    |    B    | CTRL+A  | CTRL+C  |  |  CTRL+V |  CTRL+X |    N    |    M    |    ,    |    .    |    /    |  R CTRL |
//                               |   GUI   |   DEL   | RETURN  |  SPACE  | ESCAPE  |  |  RETURN |  SPACE  |   TAB   |   BSPC  |  R ALT  |
            bindings = <
    &kp ESC    &kp Q    &kp W    &kp E     &kp R     &kp T                                                 &kp Y     &kp U     &kp I     &kp O     &kp P    &kp BSLH
    &kp TAB    &kp A    &kp S    &kp D     &kp F     &kp G                                                 &kp H     &kp J     &kp K     &kp L     &kp SEMI &kp SQT
    &kp LSHIFT &kp Z    &kp X    &kp C     &kp V     &kp B      &kp LC(A) &kp LC(C)    &kp LC(V) &kp LC(X) &kp N     &kp M     &kp COMMA &kp DOT   &kp FSLH &kp RCTRL
                                 &kp LGUI  &kp DEL   &kp RET    &kp SPACE &kp ESC      &kp RET   &kp SPACE &kp TAB   &kp BSPC  &kp RALT
            >;

            sensor-bindings = <&inc_dec_kp C_VOL_UP C_VOL_DN &inc_dec_kp PG_UP PG_DN>;
=======
        default_layer { // Layer 0
            display-name = "Base";
// ----------------------------------------------
// |      Z      |        M       |      K      |
// |    &mo 1    |   LEFT SHIFT   |    &mo 2    |
            bindings = <
                &kp Z    &kp M       &kp K
                &mo 1    &kp LSHIFT  &mo 2
            >;
        };
        abc { // Layer 1
            display-name = "ABC";
// ----------------------------------------------
// |      A      |       B       |       C      |
// |    &trans   |    &trans     |     &trans   |
            bindings = <
                &kp A     &kp B     &kp C
                &trans    &trans    &trans
            >;
        };
        xyz { // Layer 2
            display-name = "XYZ";
// ----------------------------------------------
// |        X       |      Y       |      Z     |
// |   LEFT CTRL    |  LEFT ALT    |   &trans   |
            bindings = <
                &kp X        &kp Y       &kp Z
                &kp LCTRL    &kp LALT    &trans
            >;
>>>>>>> 4235c8b491b32565850efd296a2f4199dbbc4d90
        };
    };
```
