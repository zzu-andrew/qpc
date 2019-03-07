/*$file${.::low_power.h} vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv*/
/*
* Model: low-power.qm
* File:  ${.::low_power.h}
*
* This code has been generated by QM 4.4.0 (https://www.state-machine.com/qm).
* DO NOT EDIT THIS FILE MANUALLY. All your changes will be lost.
*
* This program is open source software: you can redistribute it and/or
* modify it under the terms of the GNU General Public License as published
* by the Free Software Foundation.
*
* This program is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
* or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
* for more details.
*/
/*$endhead${.::low_power.h} ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/
#ifndef low_power_h
#define low_power_h

enum BlinkySignals {
    BTN_PRESSED_SIG = Q_USER_SIG, /* button SW1 was pressed */
    MAX_PUB_SIG,          /* the last published signal */

    TIMEOUT0_SIG,         /* timeout for Blinky0 */
    TIMEOUT1_SIG,         /* timeout for Blinky1 */
    MAX_SIG               /* the last signal */
};

/*$declare${AOs::AO_Blinky0} vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv*/
extern QActive * const AO_Blinky0;
/*$enddecl${AOs::AO_Blinky0} ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/
/*$declare${AOs::Blinky0_ctor} vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv*/
/*${AOs::Blinky0_ctor} .....................................................*/
void Blinky0_ctor(void);
/*$enddecl${AOs::Blinky0_ctor} ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/

#ifdef qxk_h /* QXK kernel? */

void XBlinky1_ctor(void);
extern QXThread XT_Blinky1;
extern QXSemaphore XSEM_sw1;

#else /* QV or QK kernels */

/*$declare${AOs::AO_Blinky1} vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv*/
extern QActive * const AO_Blinky1;
/*$enddecl${AOs::AO_Blinky1} ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/
/*$declare${AOs::Blinky1_ctor} vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv*/
/*${AOs::Blinky1_ctor} .....................................................*/
void Blinky1_ctor(void);
/*$enddecl${AOs::Blinky1_ctor} ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/

#endif

#endif /* low_power_h */
