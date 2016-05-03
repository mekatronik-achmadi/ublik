EESchema Schematic File Version 2
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:linear
LIBS:stm32
LIBS:SparkFun
LIBS:lm2596s
LIBS:switch-omron
LIBS:transistor-power
LIBS:v-reg-micrel
LIBS:circuit-cache
EELAYER 25 0
EELAYER END
$Descr A3 16535 11693
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L STM32F100C4 STM32
U 1 1 57223766
P 5400 4200
F 0 "STM32" H 4100 5850 50  0000 C CNN
F 1 "STM32F100C4" H 6450 2550 50  0000 C CNN
F 2 "Housings_QFP:TQFP-48_7x7mm_Pitch0.5mm" H 5400 4200 50  0001 C CIN
F 3 "" H 5400 4200 50  0000 C CNN
	1    5400 4200
	1    0    0    -1  
$EndComp
$Comp
L VDD #PWR7
U 1 1 5722381B
P 5100 2400
F 0 "#PWR7" H 5100 2250 50  0001 C CNN
F 1 "VDD" H 5100 2550 50  0000 C CNN
F 2 "" H 5100 2400 50  0000 C CNN
F 3 "" H 5100 2400 50  0000 C CNN
	1    5100 2400
	1    0    0    -1  
$EndComp
$Comp
L +3V3 #PWR8
U 1 1 57223842
P 5700 2400
F 0 "#PWR8" H 5700 2250 50  0001 C CNN
F 1 "+3V3" H 5700 2540 50  0000 C CNN
F 2 "" H 5700 2400 50  0000 C CNN
F 3 "" H 5700 2400 50  0000 C CNN
	1    5700 2400
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR9
U 1 1 572239C1
P 5700 6000
F 0 "#PWR9" H 5700 5750 50  0001 C CNN
F 1 "GND" H 5700 5850 50  0000 C CNN
F 2 "" H 5700 6000 50  0000 C CNN
F 3 "" H 5700 6000 50  0000 C CNN
	1    5700 6000
	1    0    0    -1  
$EndComp
Text Label 3750 2800 0    60   ~ 0
NRST
$Comp
L CONN_01X02 P-BOOT1
U 1 1 57223BC1
P 8150 3300
F 0 "P-BOOT1" H 8150 3450 50  0000 C CNN
F 1 "CONN_01X02" V 8250 3300 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x02" H 8150 3300 50  0001 C CNN
F 3 "" H 8150 3300 50  0000 C CNN
	1    8150 3300
	-1   0    0    1   
$EndComp
Text Label 8450 3350 0    60   ~ 0
BOOT0
Text Label 3750 3000 0    60   ~ 0
BOOT0
$Comp
L VDD #PWR17
U 1 1 57223E7B
P 8450 3250
F 0 "#PWR17" H 8450 3100 50  0001 C CNN
F 1 "VDD" H 8450 3400 50  0000 C CNN
F 2 "" H 8450 3250 50  0000 C CNN
F 3 "" H 8450 3250 50  0000 C CNN
	1    8450 3250
	1    0    0    -1  
$EndComp
Text Label 3750 4300 0    60   ~ 0
BOOT1
$Comp
L GND #PWR16
U 1 1 57224016
P 8100 3550
F 0 "#PWR16" H 8100 3300 50  0001 C CNN
F 1 "GND" H 8100 3400 50  0000 C CNN
F 2 "" H 8100 3550 50  0000 C CNN
F 3 "" H 8100 3550 50  0000 C CNN
	1    8100 3550
	1    0    0    -1  
$EndComp
Text Label 8450 3550 0    60   ~ 0
BOOT1
$Comp
L 10-XX_B3F-10XX SW-NRST1
U 1 1 572241EA
P 8400 2850
F 0 "SW-NRST1" H 8400 2850 60  0001 C CNN
F 1 "10-XX_B3F-10XX" H 8400 2850 60  0001 C CNN
F 2 "switch-omron:B3F-10XX" H 8400 2850 60  0001 C CNN
F 3 "" H 8400 2850 60  0000 C CNN
	1    8400 2850
	0    1    1    0   
$EndComp
Text Label 8750 2850 0    60   ~ 0
NRST
$Comp
L GND #PWR15
U 1 1 57224311
P 8100 2850
F 0 "#PWR15" H 8100 2600 50  0001 C CNN
F 1 "GND" H 8100 2700 50  0000 C CNN
F 2 "" H 8100 2850 50  0000 C CNN
F 3 "" H 8100 2850 50  0000 C CNN
	1    8100 2850
	1    0    0    -1  
$EndComp
$Comp
L R R-NRST1
U 1 1 572243E5
P 8650 2650
F 0 "R-NRST1" V 8730 2650 50  0000 C CNN
F 1 "4k7" V 8650 2650 50  0000 C CNN
F 2 "Resistors_SMD:R_0805_HandSoldering" V 8580 2650 50  0001 C CNN
F 3 "" H 8650 2650 50  0000 C CNN
	1    8650 2650
	1    0    0    -1  
$EndComp
$Comp
L VDD #PWR18
U 1 1 5722447F
P 8650 2450
F 0 "#PWR18" H 8650 2300 50  0001 C CNN
F 1 "VDD" H 8650 2600 50  0000 C CNN
F 2 "" H 8650 2450 50  0000 C CNN
F 3 "" H 8650 2450 50  0000 C CNN
	1    8650 2450
	1    0    0    -1  
$EndComp
Text Label 7050 3000 0    60   ~ 0
IND_PV_WKUP
Text Label 7050 3100 0    60   ~ 0
ADC_BATT
Text Label 7050 3200 0    60   ~ 0
ADC_LAMP
Text Label 7050 3300 0    60   ~ 0
ADC_USB
Text Label 7150 3900 0    60   ~ 0
TX
Text Label 7150 4000 0    60   ~ 0
RX
$Comp
L CONN_01X04 P-COMM1
U 1 1 5722554F
P 8100 3950
F 0 "P-COMM1" H 8100 4200 50  0000 C CNN
F 1 "CONN_01X04" V 8200 3950 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x04" H 8100 3950 50  0001 C CNN
F 3 "" H 8100 3950 50  0000 C CNN
	1    8100 3950
	-1   0    0    -1  
$EndComp
Text Label 8450 4000 0    60   ~ 0
RX
Text Label 8450 4100 0    60   ~ 0
TX
$Comp
L VDD #PWR19
U 1 1 572257F7
P 8650 3800
F 0 "#PWR19" H 8650 3650 50  0001 C CNN
F 1 "VDD" H 8650 3950 50  0000 C CNN
F 2 "" H 8650 3800 50  0000 C CNN
F 3 "" H 8650 3800 50  0000 C CNN
	1    8650 3800
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR20
U 1 1 57225813
P 8650 3900
F 0 "#PWR20" H 8650 3650 50  0001 C CNN
F 1 "GND" H 8650 3750 50  0000 C CNN
F 2 "" H 8650 3900 50  0000 C CNN
F 3 "" H 8650 3900 50  0000 C CNN
	1    8650 3900
	1    0    0    -1  
$EndComp
$Comp
L R R-L-LAMP1
U 1 1 5723119A
P 8300 4400
F 0 "R-L-LAMP1" V 8380 4400 50  0000 C CNN
F 1 "330" V 8300 4400 50  0000 C CNN
F 2 "Resistors_SMD:R_0805_HandSoldering" V 8230 4400 50  0001 C CNN
F 3 "" H 8300 4400 50  0000 C CNN
	1    8300 4400
	0    1    1    0   
$EndComp
$Comp
L R R-L-USB1
U 1 1 572312FA
P 8300 4600
F 0 "R-L-USB1" V 8380 4600 50  0000 C CNN
F 1 "330" V 8300 4600 50  0000 C CNN
F 2 "Resistors_SMD:R_0805_HandSoldering" V 8230 4600 50  0001 C CNN
F 3 "" H 8300 4600 50  0000 C CNN
	1    8300 4600
	0    1    1    0   
$EndComp
$Comp
L LED L-LAMP1
U 1 1 572313EC
P 8750 4400
F 0 "L-LAMP1" H 8750 4500 50  0000 C CNN
F 1 "LED" H 8750 4300 50  0000 C CNN
F 2 "LEDs:LED-0805" H 8750 4400 50  0001 C CNN
F 3 "" H 8750 4400 50  0000 C CNN
	1    8750 4400
	-1   0    0    1   
$EndComp
$Comp
L LED L-USB1
U 1 1 5723143D
P 8750 4600
F 0 "L-USB1" H 8750 4700 50  0000 C CNN
F 1 "LED" H 8750 4500 50  0000 C CNN
F 2 "LEDs:LED-0805" H 8750 4600 50  0001 C CNN
F 3 "" H 8750 4600 50  0000 C CNN
	1    8750 4600
	-1   0    0    1   
$EndComp
$Comp
L GND #PWR21
U 1 1 5723172A
P 8950 4700
F 0 "#PWR21" H 8950 4450 50  0001 C CNN
F 1 "GND" H 8950 4550 50  0000 C CNN
F 2 "" H 8950 4700 50  0000 C CNN
F 3 "" H 8950 4700 50  0000 C CNN
	1    8950 4700
	1    0    0    -1  
$EndComp
Text Label 3750 4900 0    60   ~ 0
L-LAMP
Text Label 3750 5000 0    60   ~ 0
L-USB
Text Label 8050 4400 0    60   ~ 0
L-LAMP
Text Label 8050 4600 0    60   ~ 0
L-USB
Text Label 3750 4800 0    60   ~ 0
L-L1
Text Label 3750 4700 0    60   ~ 0
L-L2
Text Label 3750 4600 0    60   ~ 0
L-L3
Text Label 3750 4500 0    60   ~ 0
L-L4
Text Label 3750 4400 0    60   ~ 0
L-PV
$Comp
L R R-L1
U 1 1 5723338F
P 8300 5000
F 0 "R-L1" V 8380 5000 50  0000 C CNN
F 1 "330" V 8300 5000 50  0000 C CNN
F 2 "Resistors_SMD:R_0805_HandSoldering" V 8230 5000 50  0001 C CNN
F 3 "" H 8300 5000 50  0000 C CNN
	1    8300 5000
	0    1    1    0   
$EndComp
$Comp
L R R-L2
U 1 1 57233395
P 8300 5200
F 0 "R-L2" V 8380 5200 50  0000 C CNN
F 1 "330" V 8300 5200 50  0000 C CNN
F 2 "Resistors_SMD:R_0805_HandSoldering" V 8230 5200 50  0001 C CNN
F 3 "" H 8300 5200 50  0000 C CNN
	1    8300 5200
	0    1    1    0   
$EndComp
$Comp
L LED L1
U 1 1 5723339B
P 8750 5000
F 0 "L1" H 8750 5100 50  0000 C CNN
F 1 "LED" H 8750 4900 50  0000 C CNN
F 2 "LEDs:LED-0805" H 8750 5000 50  0001 C CNN
F 3 "" H 8750 5000 50  0000 C CNN
	1    8750 5000
	-1   0    0    1   
$EndComp
$Comp
L LED L2
U 1 1 572333A1
P 8750 5200
F 0 "L2" H 8750 5300 50  0000 C CNN
F 1 "LED" H 8750 5100 50  0000 C CNN
F 2 "LEDs:LED-0805" H 8750 5200 50  0001 C CNN
F 3 "" H 8750 5200 50  0000 C CNN
	1    8750 5200
	-1   0    0    1   
$EndComp
Text Label 8050 5000 0    60   ~ 0
L-L1
Text Label 8050 5200 0    60   ~ 0
L-L2
$Comp
L R R-L3
U 1 1 572335C2
P 8300 5400
F 0 "R-L3" V 8380 5400 50  0000 C CNN
F 1 "330" V 8300 5400 50  0000 C CNN
F 2 "Resistors_SMD:R_0805_HandSoldering" V 8230 5400 50  0001 C CNN
F 3 "" H 8300 5400 50  0000 C CNN
	1    8300 5400
	0    1    1    0   
$EndComp
$Comp
L R R-L4
U 1 1 572335C8
P 8300 5600
F 0 "R-L4" V 8380 5600 50  0000 C CNN
F 1 "330" V 8300 5600 50  0000 C CNN
F 2 "Resistors_SMD:R_0805_HandSoldering" V 8230 5600 50  0001 C CNN
F 3 "" H 8300 5600 50  0000 C CNN
	1    8300 5600
	0    1    1    0   
$EndComp
$Comp
L LED L3
U 1 1 572335CE
P 8750 5400
F 0 "L3" H 8750 5500 50  0000 C CNN
F 1 "LED" H 8750 5300 50  0000 C CNN
F 2 "LEDs:LED-0805" H 8750 5400 50  0001 C CNN
F 3 "" H 8750 5400 50  0000 C CNN
	1    8750 5400
	-1   0    0    1   
$EndComp
$Comp
L LED L4
U 1 1 572335D4
P 8750 5600
F 0 "L4" H 8750 5700 50  0000 C CNN
F 1 "LED" H 8750 5500 50  0000 C CNN
F 2 "LEDs:LED-0805" H 8750 5600 50  0001 C CNN
F 3 "" H 8750 5600 50  0000 C CNN
	1    8750 5600
	-1   0    0    1   
$EndComp
Text Label 8050 5400 0    60   ~ 0
L-L3
Text Label 8050 5600 0    60   ~ 0
L-L4
$Comp
L GND #PWR22
U 1 1 57234457
P 8950 5700
F 0 "#PWR22" H 8950 5450 50  0001 C CNN
F 1 "GND" H 8950 5550 50  0000 C CNN
F 2 "" H 8950 5700 50  0000 C CNN
F 3 "" H 8950 5700 50  0000 C CNN
	1    8950 5700
	1    0    0    -1  
$EndComp
$Comp
L R R-L-PV1
U 1 1 5723511C
P 8300 5950
F 0 "R-L-PV1" V 8380 5950 50  0000 C CNN
F 1 "330" V 8300 5950 50  0000 C CNN
F 2 "Resistors_SMD:R_0805_HandSoldering" V 8230 5950 50  0001 C CNN
F 3 "" H 8300 5950 50  0000 C CNN
	1    8300 5950
	0    1    1    0   
$EndComp
$Comp
L LED L-PV1
U 1 1 57235122
P 8750 5950
F 0 "L-PV1" H 8750 6050 50  0000 C CNN
F 1 "LED" H 8750 5850 50  0000 C CNN
F 2 "LEDs:LED-0805" H 8750 5950 50  0001 C CNN
F 3 "" H 8750 5950 50  0000 C CNN
	1    8750 5950
	-1   0    0    1   
$EndComp
Text Label 8050 5950 0    60   ~ 0
L-PV
$Comp
L GND #PWR23
U 1 1 572359DB
P 8950 6050
F 0 "#PWR23" H 8950 5800 50  0001 C CNN
F 1 "GND" H 8950 5900 50  0000 C CNN
F 2 "" H 8950 6050 50  0000 C CNN
F 3 "" H 8950 6050 50  0000 C CNN
	1    8950 6050
	1    0    0    -1  
$EndComp
$Comp
L M02PTH BATT1
U 1 1 57245F1D
P 4100 7200
F 0 "BATT1" H 4000 7430 50  0000 L BNN
F 1 "M02PTH" H 4000 7000 50  0000 L BNN
F 2 "SparkFun:SparkFun-1X02_XTRA_BIG" H 4100 7350 50  0001 C CNN
F 3 "" H 4100 7200 60  0000 C CNN
	1    4100 7200
	1    0    0    -1  
$EndComp
$Comp
L M02PTH BATT2
U 1 1 5724648D
P 4100 7750
F 0 "BATT2" H 4000 7980 50  0000 L BNN
F 1 "M02PTH" H 4000 7550 50  0000 L BNN
F 2 "SparkFun:SparkFun-1X02_XTRA_BIG" H 4100 7900 50  0001 C CNN
F 3 "" H 4100 7750 60  0000 C CNN
	1    4100 7750
	1    0    0    -1  
$EndComp
$Comp
L M02PTH BATT3
U 1 1 57246521
P 4100 8300
F 0 "BATT3" H 4000 8530 50  0000 L BNN
F 1 "M02PTH" H 4000 8100 50  0000 L BNN
F 2 "SparkFun:SparkFun-1X02_XTRA_BIG" H 4100 8450 50  0001 C CNN
F 3 "" H 4100 8300 60  0000 C CNN
	1    4100 8300
	1    0    0    -1  
$EndComp
$Comp
L M02PTH BATT4
U 1 1 572467F8
P 4100 8850
F 0 "BATT4" H 4000 9080 50  0000 L BNN
F 1 "M02PTH" H 4000 8650 50  0000 L BNN
F 2 "SparkFun:SparkFun-1X02_XTRA_BIG" H 4100 9000 50  0001 C CNN
F 3 "" H 4100 8850 60  0000 C CNN
	1    4100 8850
	1    0    0    -1  
$EndComp
$Comp
L R R-ADC-BATT1
U 1 1 572475F2
P 4850 7250
F 0 "R-ADC-BATT1" V 4930 7250 50  0000 C CNN
F 1 "470k" V 4850 7250 50  0000 C CNN
F 2 "Resistors_ThroughHole:Resistor_Horizontal_RM10mm" V 4780 7250 50  0001 C CNN
F 3 "" H 4850 7250 50  0000 C CNN
	1    4850 7250
	1    0    0    -1  
$EndComp
$Comp
L R R-ADC-BATT2
U 1 1 57247635
P 4850 7600
F 0 "R-ADC-BATT2" V 4930 7600 50  0000 C CNN
F 1 "100k" V 4850 7600 50  0000 C CNN
F 2 "Resistors_ThroughHole:Resistor_Horizontal_RM10mm" V 4780 7600 50  0001 C CNN
F 3 "" H 4850 7600 50  0000 C CNN
	1    4850 7600
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR4
U 1 1 57248026
P 4850 7950
F 0 "#PWR4" H 4850 7700 50  0001 C CNN
F 1 "GND" H 4850 7800 50  0000 C CNN
F 2 "" H 4850 7950 50  0000 C CNN
F 3 "" H 4850 7950 50  0000 C CNN
	1    4850 7950
	1    0    0    -1  
$EndComp
$Comp
L C C-ADC1
U 1 1 57248181
P 5050 7650
F 0 "C-ADC1" H 5075 7750 50  0000 L CNN
F 1 "100n" H 5075 7550 50  0000 L CNN
F 2 "Capacitors_SMD:C_0805_HandSoldering" H 5088 7500 50  0001 C CNN
F 3 "" H 5050 7650 50  0000 C CNN
	1    5050 7650
	1    0    0    -1  
$EndComp
Text Label 5200 7450 0    60   ~ 0
ADC_BATT
$Comp
L GNDPWR #PWR2
U 1 1 57249148
P 4400 8950
F 0 "#PWR2" H 4400 8750 50  0001 C CNN
F 1 "GNDPWR" H 4400 8820 50  0000 C CNN
F 2 "" H 4400 8900 50  0000 C CNN
F 3 "" H 4400 8900 50  0000 C CNN
	1    4400 8950
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR6
U 1 1 572495A5
P 4950 8850
F 0 "#PWR6" H 4950 8600 50  0001 C CNN
F 1 "GND" H 4950 8700 50  0000 C CNN
F 2 "" H 4950 8850 50  0000 C CNN
F 3 "" H 4950 8850 50  0000 C CNN
	1    4950 8850
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X02 SW-PWR1
U 1 1 5724A196
P 4700 9050
F 0 "SW-PWR1" H 4700 9200 50  0000 C CNN
F 1 "CONN_01X02" V 4800 9050 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x02" H 4700 9050 50  0001 C CNN
F 3 "" H 4700 9050 50  0000 C CNN
	1    4700 9050
	0    1    1    0   
$EndComp
$Comp
L +15V #PWR1
U 1 1 5724AF08
P 4400 6900
F 0 "#PWR1" H 4400 6750 50  0001 C CNN
F 1 "+15V" H 4400 7040 50  0000 C CNN
F 2 "" H 4400 6900 50  0000 C CNN
F 3 "" H 4400 6900 50  0000 C CNN
	1    4400 6900
	1    0    0    -1  
$EndComp
$Comp
L BARREL_JACK CON-PV1
U 1 1 57270980
P 10600 2550
F 0 "CON-PV1" H 10600 2800 50  0000 C CNN
F 1 "BARREL_JACK" H 10600 2350 50  0000 C CNN
F 2 "Connect:JACK_ALIM" H 10600 2550 50  0001 C CNN
F 3 "" H 10600 2550 50  0000 C CNN
	1    10600 2550
	0    -1   1    0   
$EndComp
$Comp
L R R-PV2
U 1 1 57270CE4
P 10350 3050
F 0 "R-PV2" V 10430 3050 50  0000 C CNN
F 1 "100k" V 10350 3050 50  0000 C CNN
F 2 "Resistors_SMD:R_0805_HandSoldering" V 10280 3050 50  0001 C CNN
F 3 "" H 10350 3050 50  0000 C CNN
	1    10350 3050
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR31
U 1 1 572719C0
P 10350 3550
F 0 "#PWR31" H 10350 3300 50  0001 C CNN
F 1 "GND" H 10350 3400 50  0000 C CNN
F 2 "" H 10350 3550 50  0000 C CNN
F 3 "" H 10350 3550 50  0000 C CNN
	1    10350 3550
	1    0    0    -1  
$EndComp
$Comp
L VDD #PWR29
U 1 1 572734AE
P 9750 3150
F 0 "#PWR29" H 9750 3000 50  0001 C CNN
F 1 "VDD" H 9750 3300 50  0000 C CNN
F 2 "" H 9750 3150 50  0000 C CNN
F 3 "" H 9750 3150 50  0000 C CNN
	1    9750 3150
	1    0    0    -1  
$EndComp
$Comp
L R R-PV1
U 1 1 572737A6
P 9650 3650
F 0 "R-PV1" V 9730 3650 50  0000 C CNN
F 1 "4k7" V 9650 3650 50  0000 C CNN
F 2 "Resistors_SMD:R_0805_HandSoldering" V 9580 3650 50  0001 C CNN
F 3 "" H 9650 3650 50  0000 C CNN
	1    9650 3650
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR25
U 1 1 572742F8
P 9650 3850
F 0 "#PWR25" H 9650 3600 50  0001 C CNN
F 1 "GND" H 9650 3700 50  0000 C CNN
F 2 "" H 9650 3850 50  0000 C CNN
F 3 "" H 9650 3850 50  0000 C CNN
	1    9650 3850
	1    0    0    -1  
$EndComp
Text Label 9550 3450 0    60   ~ 0
IND_PV_WKUP
$Comp
L GNDPWR #PWR35
U 1 1 57276075
P 10700 2900
F 0 "#PWR35" H 10700 2700 50  0001 C CNN
F 1 "GNDPWR" H 10700 2770 50  0000 C CNN
F 2 "" H 10700 2850 50  0000 C CNN
F 3 "" H 10700 2850 50  0000 C CNN
	1    10700 2900
	1    0    0    -1  
$EndComp
$Comp
L +24V #PWR30
U 1 1 572762B3
P 10200 2850
F 0 "#PWR30" H 10200 2700 50  0001 C CNN
F 1 "+24V" H 10200 2990 50  0000 C CNN
F 2 "" H 10200 2850 50  0000 C CNN
F 3 "" H 10200 2850 50  0000 C CNN
	1    10200 2850
	1    0    0    -1  
$EndComp
Wire Wire Line
	5100 2400 5100 2500
Wire Wire Line
	5100 2500 5400 2500
Connection ~ 5200 2500
Wire Wire Line
	5700 2400 5700 2500
Wire Wire Line
	5700 5900 5700 6000
Wire Wire Line
	5100 5900 5700 5900
Connection ~ 5400 5900
Connection ~ 5200 5900
Wire Wire Line
	3900 2800 3750 2800
Wire Wire Line
	8350 3350 8450 3350
Wire Wire Line
	3900 3000 3750 3000
Wire Wire Line
	8350 3250 8450 3250
Wire Wire Line
	3900 4300 3750 4300
Wire Wire Line
	8100 3550 8450 3550
Wire Wire Line
	8600 2850 8600 2950
Wire Wire Line
	8200 2850 8200 2950
Wire Wire Line
	8600 2850 8750 2850
Wire Wire Line
	8100 2850 8200 2850
Wire Wire Line
	8650 2800 8650 2850
Connection ~ 8650 2850
Wire Wire Line
	8650 2450 8650 2500
Wire Wire Line
	6900 3000 7050 3000
Wire Wire Line
	6900 3100 7050 3100
Wire Wire Line
	6900 3200 7050 3200
Wire Wire Line
	6900 3300 7050 3300
Wire Wire Line
	6900 3900 7150 3900
Wire Wire Line
	6900 4000 7150 4000
Wire Wire Line
	8300 4000 8450 4000
Wire Wire Line
	8300 4100 8450 4100
Wire Wire Line
	8300 3800 8650 3800
Wire Wire Line
	8650 3900 8300 3900
Wire Wire Line
	8950 4400 8950 4700
Wire Wire Line
	8550 4400 8450 4400
Wire Wire Line
	8550 4600 8450 4600
Wire Wire Line
	8150 4400 8050 4400
Wire Wire Line
	8150 4600 8050 4600
Connection ~ 8950 4600
Wire Wire Line
	3900 4900 3750 4900
Wire Wire Line
	3900 5000 3750 5000
Wire Wire Line
	3900 4800 3750 4800
Wire Wire Line
	3900 4700 3750 4700
Wire Wire Line
	3900 4600 3750 4600
Wire Wire Line
	3900 4500 3750 4500
Wire Wire Line
	3900 4400 3750 4400
Wire Wire Line
	8950 5000 8950 5700
Wire Wire Line
	8550 5000 8450 5000
Wire Wire Line
	8550 5200 8450 5200
Wire Wire Line
	8150 5000 8050 5000
Wire Wire Line
	8150 5200 8050 5200
Connection ~ 8950 5200
Wire Wire Line
	8550 5400 8450 5400
Wire Wire Line
	8550 5600 8450 5600
Wire Wire Line
	8150 5400 8050 5400
Wire Wire Line
	8150 5600 8050 5600
Connection ~ 8950 5400
Connection ~ 8950 5600
Wire Wire Line
	8550 5950 8450 5950
Wire Wire Line
	8150 5950 8050 5950
Wire Wire Line
	8950 5950 8950 6050
Wire Wire Line
	4400 8300 4400 8750
Wire Wire Line
	4400 7750 4400 8200
Wire Wire Line
	4400 7200 4400 7650
Wire Wire Line
	4400 7100 4850 7100
Wire Wire Line
	4850 7400 4850 7450
Wire Wire Line
	4850 7750 4850 7950
Wire Wire Line
	4850 7450 5200 7450
Wire Wire Line
	5050 7800 4850 7800
Connection ~ 4850 7800
Wire Wire Line
	5050 7500 5050 7450
Connection ~ 5050 7450
Wire Wire Line
	4400 8850 4400 8950
Wire Wire Line
	4650 8850 4400 8850
Wire Wire Line
	4750 8850 4950 8850
Wire Wire Line
	4400 6900 4400 7100
Wire Wire Line
	10200 2850 10500 2850
Wire Wire Line
	10350 2850 10350 2900
Wire Wire Line
	9550 3450 9750 3450
Wire Wire Line
	9650 3500 9650 3450
Wire Wire Line
	9650 3800 9650 3850
Wire Wire Line
	10600 2850 10700 2850
Wire Wire Line
	10700 2850 10700 2900
Connection ~ 10350 2850
$Comp
L PC817 OK-PV1
U 1 1 572705B6
P 10050 3350
F 0 "OK-PV1" H 9850 3550 50  0000 L CNN
F 1 "PC817" H 10050 3550 50  0000 L CNN
F 2 "Housings_DIP:DIP-4_W7.62mm" H 9850 3150 50  0001 L CIN
F 3 "" H 10050 3350 50  0000 L CNN
	1    10050 3350
	-1   0    0    -1  
$EndComp
Wire Wire Line
	10350 3200 10350 3250
Wire Wire Line
	10350 3450 10350 3550
Connection ~ 9650 3450
Wire Wire Line
	9750 3150 9750 3250
$Comp
L PC817 OK-PV2
U 1 1 5727AD7D
P 10050 4600
F 0 "OK-PV2" H 9850 4800 50  0000 L CNN
F 1 "PC817" H 10050 4800 50  0000 L CNN
F 2 "Housings_DIP:DIP-4_W7.62mm" H 9850 4400 50  0000 L CIN
F 3 "" H 10050 4600 50  0000 L CNN
	1    10050 4600
	1    0    0    -1  
$EndComp
$Comp
L IRF9530_TO220BV TR-PV1
U 1 1 5727B172
P 10700 4600
F 0 "TR-PV1" H 10700 4600 60  0001 C CNN
F 1 "IRF9530_TO220BV" H 10700 4600 60  0001 C CNN
F 2 "transistor-power:TO220BV" H 10700 4600 60  0001 C CNN
F 3 "" H 10700 4600 60  0000 C CNN
	1    10700 4600
	1    0    0    -1  
$EndComp
$Comp
L +24V #PWR37
U 1 1 5727D109
P 10800 4250
F 0 "#PWR37" H 10800 4100 50  0001 C CNN
F 1 "+24V" H 10800 4390 50  0000 C CNN
F 2 "" H 10800 4250 50  0000 C CNN
F 3 "" H 10800 4250 50  0000 C CNN
	1    10800 4250
	1    0    0    -1  
$EndComp
Wire Wire Line
	10800 4400 10350 4400
Wire Wire Line
	10350 4400 10350 4500
Wire Wire Line
	10800 4250 10800 4400
Wire Wire Line
	10350 4700 10500 4700
$Comp
L R R-PV3
U 1 1 5727D521
P 9650 4350
F 0 "R-PV3" V 9730 4350 50  0000 C CNN
F 1 "330" V 9650 4350 50  0000 C CNN
F 2 "Resistors_SMD:R_0805_HandSoldering" V 9580 4350 50  0001 C CNN
F 3 "" H 9650 4350 50  0000 C CNN
	1    9650 4350
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR26
U 1 1 5727D72F
P 9650 4700
F 0 "#PWR26" H 9650 4450 50  0001 C CNN
F 1 "GND" H 9650 4550 50  0000 C CNN
F 2 "" H 9650 4700 50  0000 C CNN
F 3 "" H 9650 4700 50  0000 C CNN
	1    9650 4700
	1    0    0    -1  
$EndComp
Wire Wire Line
	9750 4700 9650 4700
Wire Wire Line
	9750 4500 9650 4500
Wire Wire Line
	9650 4200 9800 4200
Text Label 9800 4200 0    60   ~ 0
CON_PV
$Comp
L R R-PV4
U 1 1 5727E382
P 10450 4900
F 0 "R-PV4" V 10530 4900 50  0000 C CNN
F 1 "4k7" V 10450 4900 50  0000 C CNN
F 2 "Resistors_SMD:R_0805_HandSoldering" V 10380 4900 50  0001 C CNN
F 3 "" H 10450 4900 50  0000 C CNN
	1    10450 4900
	1    0    0    -1  
$EndComp
$Comp
L GNDPWR #PWR32
U 1 1 5727E52D
P 10450 5100
F 0 "#PWR32" H 10450 4900 50  0001 C CNN
F 1 "GNDPWR" H 10450 4970 50  0000 C CNN
F 2 "" H 10450 5050 50  0000 C CNN
F 3 "" H 10450 5050 50  0000 C CNN
	1    10450 5100
	1    0    0    -1  
$EndComp
Wire Wire Line
	10450 4750 10450 4700
Connection ~ 10450 4700
Wire Wire Line
	10450 5050 10450 5100
$Comp
L D D-PV1
U 1 1 5727E9F0
P 10950 4900
F 0 "D-PV1" H 10950 5000 50  0000 C CNN
F 1 "D" H 10950 4800 50  0000 C CNN
F 2 "Diodes_SMD:SMA_Handsoldering" H 10950 4900 50  0001 C CNN
F 3 "" H 10950 4900 50  0000 C CNN
	1    10950 4900
	-1   0    0    1   
$EndComp
$Comp
L +15V #PWR39
U 1 1 5727EAFC
P 11100 4800
F 0 "#PWR39" H 11100 4650 50  0001 C CNN
F 1 "+15V" H 11100 4940 50  0000 C CNN
F 2 "" H 11100 4800 50  0000 C CNN
F 3 "" H 11100 4800 50  0000 C CNN
	1    11100 4800
	1    0    0    -1  
$EndComp
Wire Wire Line
	11100 4800 11100 4900
Wire Wire Line
	10800 4800 10800 4900
Wire Wire Line
	3900 5300 3750 5300
Text Label 3750 5300 0    60   ~ 0
CON_PV
$Comp
L PC817 OK-LAMP1
U 1 1 57282296
P 10050 6100
F 0 "OK-LAMP1" H 9850 6300 50  0000 L CNN
F 1 "PC817" H 10050 6300 50  0000 L CNN
F 2 "Housings_DIP:DIP-4_W7.62mm" H 9850 5900 50  0000 L CIN
F 3 "" H 10050 6100 50  0000 L CNN
	1    10050 6100
	1    0    0    -1  
$EndComp
$Comp
L IRF530_TO220BV TR-LAMP1
U 1 1 572828A8
P 10750 6100
F 0 "TR-LAMP1" H 10750 6100 60  0001 C CNN
F 1 "IRF530_TO220BV" H 10750 6100 60  0001 C CNN
F 2 "transistor-power:TO220BV" H 10750 6100 60  0001 C CNN
F 3 "" H 10750 6100 60  0000 C CNN
	1    10750 6100
	1    0    0    -1  
$EndComp
Wire Wire Line
	10350 6200 10650 6200
$Comp
L D D-LAMP1
U 1 1 57282E62
P 10850 5650
F 0 "D-LAMP1" H 10850 5750 50  0000 C CNN
F 1 "D" H 10850 5550 50  0000 C CNN
F 2 "Diodes_SMD:SMA_Handsoldering" H 10850 5650 50  0001 C CNN
F 3 "" H 10850 5650 50  0000 C CNN
	1    10850 5650
	0    -1   -1   0   
$EndComp
$Comp
L +15V #PWR38
U 1 1 57283181
P 10850 5400
F 0 "#PWR38" H 10850 5250 50  0001 C CNN
F 1 "+15V" H 10850 5540 50  0000 C CNN
F 2 "" H 10850 5400 50  0000 C CNN
F 3 "" H 10850 5400 50  0000 C CNN
	1    10850 5400
	1    0    0    -1  
$EndComp
Wire Wire Line
	10850 5400 10850 5500
Wire Wire Line
	10850 5800 10850 5900
Wire Wire Line
	10350 6000 10400 6000
Wire Wire Line
	10400 6000 10400 5850
Wire Wire Line
	10400 5850 10850 5850
Connection ~ 10850 5850
$Comp
L R R-LAMP1
U 1 1 572839D2
P 9650 5850
F 0 "R-LAMP1" V 9730 5850 50  0000 C CNN
F 1 "330" V 9650 5850 50  0000 C CNN
F 2 "Resistors_SMD:R_0805_HandSoldering" V 9580 5850 50  0001 C CNN
F 3 "" H 9650 5850 50  0000 C CNN
	1    9650 5850
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR27
U 1 1 57283C11
P 9650 6200
F 0 "#PWR27" H 9650 5950 50  0001 C CNN
F 1 "GND" H 9650 6050 50  0000 C CNN
F 2 "" H 9650 6200 50  0000 C CNN
F 3 "" H 9650 6200 50  0000 C CNN
	1    9650 6200
	1    0    0    -1  
$EndComp
Wire Wire Line
	9750 6200 9650 6200
Wire Wire Line
	9750 6000 9650 6000
Wire Wire Line
	9650 5700 9800 5700
Text Label 9800 5700 0    60   ~ 0
CON_LAMP
Wire Wire Line
	3900 5400 3750 5400
Text Label 3750 5400 0    60   ~ 0
CON_LAMP
$Comp
L R R-LAMP2
U 1 1 572890A6
P 10500 6400
F 0 "R-LAMP2" V 10580 6400 50  0000 C CNN
F 1 "4k7" V 10500 6400 50  0000 C CNN
F 2 "Resistors_SMD:R_0805_HandSoldering" V 10430 6400 50  0001 C CNN
F 3 "" H 10500 6400 50  0000 C CNN
	1    10500 6400
	1    0    0    -1  
$EndComp
Wire Wire Line
	10500 6550 10500 6600
Wire Wire Line
	10500 6250 10500 6200
Connection ~ 10500 6200
$Comp
L GND #PWR34
U 1 1 57289B95
P 10500 6600
F 0 "#PWR34" H 10500 6350 50  0001 C CNN
F 1 "GND" H 10500 6450 50  0000 C CNN
F 2 "" H 10500 6600 50  0000 C CNN
F 3 "" H 10500 6600 50  0000 C CNN
	1    10500 6600
	1    0    0    -1  
$EndComp
$Comp
L PC817 OK-USB1
U 1 1 5728A1BE
P 10050 7800
F 0 "OK-USB1" H 9850 8000 50  0000 L CNN
F 1 "PC817" H 10050 8000 50  0000 L CNN
F 2 "Housings_DIP:DIP-4_W7.62mm" H 9850 7600 50  0000 L CIN
F 3 "" H 10050 7800 50  0000 L CNN
	1    10050 7800
	1    0    0    -1  
$EndComp
$Comp
L R R-USB1
U 1 1 5728A55F
P 9650 7500
F 0 "R-USB1" V 9730 7500 50  0000 C CNN
F 1 "330" V 9650 7500 50  0000 C CNN
F 2 "Resistors_SMD:R_0805_HandSoldering" V 9580 7500 50  0001 C CNN
F 3 "" H 9650 7500 50  0000 C CNN
	1    9650 7500
	1    0    0    -1  
$EndComp
$Comp
L R R-USB2
U 1 1 5728A730
P 10450 8100
F 0 "R-USB2" V 10530 8100 50  0000 C CNN
F 1 "4k7" V 10450 8100 50  0000 C CNN
F 2 "Resistors_SMD:R_0805_HandSoldering" V 10380 8100 50  0001 C CNN
F 3 "" H 10450 8100 50  0000 C CNN
	1    10450 8100
	1    0    0    -1  
$EndComp
$Comp
L D D-USB1
U 1 1 5728ACB0
P 10750 7300
F 0 "D-USB1" H 10750 7400 50  0000 C CNN
F 1 "D" H 10750 7200 50  0000 C CNN
F 2 "Diodes_SMD:SMA_Handsoldering" H 10750 7300 50  0001 C CNN
F 3 "" H 10750 7300 50  0000 C CNN
	1    10750 7300
	0    -1   -1   0   
$EndComp
$Comp
L IRF530_TO220BV TR-USB1
U 1 1 5728ADF5
P 10650 7800
F 0 "TR-USB1" H 10650 7800 60  0001 C CNN
F 1 "IRF530_TO220BV" H 10650 7800 60  0001 C CNN
F 2 "transistor-power:TO220BV" H 10650 7800 60  0001 C CNN
F 3 "" H 10650 7800 60  0000 C CNN
	1    10650 7800
	1    0    0    -1  
$EndComp
Wire Wire Line
	10350 7900 10550 7900
Wire Wire Line
	10450 7950 10450 7900
Connection ~ 10450 7900
Wire Wire Line
	10750 7450 10750 7600
Wire Wire Line
	10350 7700 10450 7700
Wire Wire Line
	10450 7700 10450 7550
Wire Wire Line
	10450 7550 10750 7550
Connection ~ 10750 7550
$Comp
L +15V #PWR36
U 1 1 5728C61B
P 10750 7000
F 0 "#PWR36" H 10750 6850 50  0001 C CNN
F 1 "+15V" H 10750 7140 50  0000 C CNN
F 2 "" H 10750 7000 50  0000 C CNN
F 3 "" H 10750 7000 50  0000 C CNN
	1    10750 7000
	1    0    0    -1  
$EndComp
Wire Wire Line
	10750 7000 10750 7150
$Comp
L GND #PWR28
U 1 1 5728DC8C
P 9650 7950
F 0 "#PWR28" H 9650 7700 50  0001 C CNN
F 1 "GND" H 9650 7800 50  0000 C CNN
F 2 "" H 9650 7950 50  0000 C CNN
F 3 "" H 9650 7950 50  0000 C CNN
	1    9650 7950
	1    0    0    -1  
$EndComp
Wire Wire Line
	9650 7350 9800 7350
Text Label 9800 7350 0    60   ~ 0
CON_USB
Wire Wire Line
	9750 7700 9650 7700
Wire Wire Line
	9650 7700 9650 7650
Wire Wire Line
	9750 7900 9650 7900
Wire Wire Line
	9650 7900 9650 7950
$Comp
L GND #PWR33
U 1 1 5728F192
P 10450 8350
F 0 "#PWR33" H 10450 8100 50  0001 C CNN
F 1 "GND" H 10450 8200 50  0000 C CNN
F 2 "" H 10450 8350 50  0000 C CNN
F 3 "" H 10450 8350 50  0000 C CNN
	1    10450 8350
	1    0    0    -1  
$EndComp
Wire Wire Line
	10450 8250 10450 8350
$Comp
L VDD #PWR5
U 1 1 5728FFE5
P 4900 8500
F 0 "#PWR5" H 4900 8350 50  0001 C CNN
F 1 "VDD" H 4900 8650 50  0000 C CNN
F 2 "" H 4900 8500 50  0000 C CNN
F 3 "" H 4900 8500 50  0000 C CNN
	1    4900 8500
	1    0    0    -1  
$EndComp
$Comp
L D D-VDD1
U 1 1 572900CB
P 4650 8500
F 0 "D-VDD1" H 4650 8600 50  0000 C CNN
F 1 "D" H 4650 8400 50  0000 C CNN
F 2 "Diodes_SMD:SMA_Handsoldering" H 4650 8500 50  0001 C CNN
F 3 "" H 4650 8500 50  0000 C CNN
	1    4650 8500
	-1   0    0    1   
$EndComp
Wire Wire Line
	4500 8500 4400 8500
Connection ~ 4400 8500
Wire Wire Line
	4800 8500 4900 8500
$Comp
L +6V #PWR3
U 1 1 57293ECD
P 4600 7950
F 0 "#PWR3" H 4600 7800 50  0001 C CNN
F 1 "+6V" H 4600 8090 50  0000 C CNN
F 2 "" H 4600 7950 50  0000 C CNN
F 3 "" H 4600 7950 50  0000 C CNN
	1    4600 7950
	1    0    0    -1  
$EndComp
Wire Wire Line
	4600 7950 4400 7950
Connection ~ 4400 7950
$Comp
L MIC5219BM5_SOT23-5 U1
U 1 1 57274EE9
P 6700 8250
F 0 "U1" H 6700 8250 60  0001 C CNN
F 1 "MIC5219BM5_SOT23-5" H 6700 8250 60  0001 C CNN
F 2 "TO_SOT_Packages_SMD:SOT-23-5" H 6700 8250 60  0001 C CNN
F 3 "" H 6700 8250 60  0000 C CNN
	1    6700 8250
	1    0    0    -1  
$EndComp
$Comp
L +6V #PWR10
U 1 1 57275308
P 6200 7950
F 0 "#PWR10" H 6200 7800 50  0001 C CNN
F 1 "+6V" H 6200 8090 50  0000 C CNN
F 2 "" H 6200 7950 50  0000 C CNN
F 3 "" H 6200 7950 50  0000 C CNN
	1    6200 7950
	1    0    0    -1  
$EndComp
Wire Wire Line
	6300 8050 6200 8050
Wire Wire Line
	6200 7950 6200 8250
Wire Wire Line
	6200 8250 6300 8250
Connection ~ 6200 8050
Wire Wire Line
	7200 8050 7100 8050
$Comp
L GND #PWR11
U 1 1 5727776C
P 6800 8750
F 0 "#PWR11" H 6800 8500 50  0001 C CNN
F 1 "GND" H 6800 8600 50  0000 C CNN
F 2 "" H 6800 8750 50  0000 C CNN
F 3 "" H 6800 8750 50  0000 C CNN
	1    6800 8750
	1    0    0    -1  
$EndComp
Wire Wire Line
	6800 8650 6800 8750
$Comp
L CONN_01X02 P-VDD-3V3
U 1 1 57277B40
P 7600 8400
F 0 "P-VDD-3V3" H 7600 8550 50  0000 C CNN
F 1 "CONN_01X02" V 7700 8400 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x02" H 7600 8400 50  0001 C CNN
F 3 "" H 7600 8400 50  0000 C CNN
	1    7600 8400
	0    1    1    0   
$EndComp
$Comp
L +3V3 #PWR13
U 1 1 57277D50
P 7550 8100
F 0 "#PWR13" H 7550 7950 50  0001 C CNN
F 1 "+3V3" H 7550 8240 50  0000 C CNN
F 2 "" H 7550 8100 50  0000 C CNN
F 3 "" H 7550 8100 50  0000 C CNN
	1    7550 8100
	1    0    0    -1  
$EndComp
$Comp
L VDD #PWR14
U 1 1 57277DBC
P 7650 8100
F 0 "#PWR14" H 7650 7950 50  0001 C CNN
F 1 "VDD" H 7650 8250 50  0000 C CNN
F 2 "" H 7650 8100 50  0000 C CNN
F 3 "" H 7650 8100 50  0000 C CNN
	1    7650 8100
	1    0    0    -1  
$EndComp
Wire Wire Line
	7650 8100 7650 8200
Wire Wire Line
	7550 8100 7550 8200
$Comp
L D D-3V3
U 1 1 572789B2
P 7200 7850
F 0 "D-3V3" H 7200 7950 50  0000 C CNN
F 1 "D" H 7200 7750 50  0000 C CNN
F 2 "Diodes_SMD:SMA_Handsoldering" H 7200 7850 50  0001 C CNN
F 3 "" H 7200 7850 50  0000 C CNN
	1    7200 7850
	0    1    1    0   
$EndComp
$Comp
L +3V3 #PWR12
U 1 1 57278C41
P 7200 7650
F 0 "#PWR12" H 7200 7500 50  0001 C CNN
F 1 "+3V3" H 7200 7790 50  0000 C CNN
F 2 "" H 7200 7650 50  0000 C CNN
F 3 "" H 7200 7650 50  0000 C CNN
	1    7200 7650
	1    0    0    -1  
$EndComp
Wire Wire Line
	7200 8000 7200 8050
Wire Wire Line
	7200 7650 7200 7700
Wire Wire Line
	3900 5500 3750 5500
Text Label 3750 5500 0    60   ~ 0
CON_USB
$Comp
L LM2596S IC-VUSB1
U 1 1 5728232E
P 11350 8300
F 0 "IC-VUSB1" H 11050 8550 50  0000 L BNN
F 1 "LM2596S" H 11450 8550 50  0000 L BNN
F 2 "TO_SOT_Packages_SMD:TO-263-5Lead" H 11350 8450 50  0001 C CNN
F 3 "" H 11350 8300 60  0000 C CNN
	1    11350 8300
	1    0    0    -1  
$EndComp
$Comp
L CP C_VUSB1
U 1 1 57282862
P 10750 8350
F 0 "C_VUSB1" H 10775 8450 50  0000 L CNN
F 1 "100u" H 10775 8250 50  0000 L CNN
F 2 "Capacitors_ThroughHole:C_Radial_D5_L6_P2.5" H 10788 8200 50  0001 C CNN
F 3 "" H 10750 8350 50  0000 C CNN
	1    10750 8350
	1    0    0    -1  
$EndComp
Wire Wire Line
	10950 8200 10750 8200
$Comp
L GND #PWR40
U 1 1 57283CF9
P 11200 8700
F 0 "#PWR40" H 11200 8450 50  0001 C CNN
F 1 "GND" H 11200 8550 50  0000 C CNN
F 2 "" H 11200 8700 50  0000 C CNN
F 3 "" H 11200 8700 50  0000 C CNN
	1    11200 8700
	1    0    0    -1  
$EndComp
Wire Wire Line
	10750 8700 13250 8700
Connection ~ 11350 8700
Wire Wire Line
	10750 8500 10750 8700
Connection ~ 11200 8700
Wire Wire Line
	10950 8400 10950 8700
Connection ~ 10950 8700
$Comp
L D_Schottky D-VUSB1
U 1 1 57285A32
P 12000 8350
F 0 "D-VUSB1" H 12000 8450 50  0000 C CNN
F 1 "D_Schottky" H 12000 8250 50  0000 C CNN
F 2 "Diodes_SMD:SMA_Handsoldering" H 12000 8350 50  0001 C CNN
F 3 "" H 12000 8350 50  0000 C CNN
	1    12000 8350
	0    1    1    0   
$EndComp
Wire Wire Line
	11750 8200 12100 8200
$Comp
L INDUCTOR L-VUSB1
U 1 1 572864AA
P 12400 8200
F 0 "L-VUSB1" V 12350 8200 50  0000 C CNN
F 1 "INDUCTOR" V 12500 8200 50  0000 C CNN
F 2 "Inductors:INDUCTOR_V" H 12400 8200 50  0001 C CNN
F 3 "" H 12400 8200 50  0000 C CNN
	1    12400 8200
	0    1    1    0   
$EndComp
$Comp
L CP C_VUSB2
U 1 1 57286E91
P 12850 8350
F 0 "C_VUSB2" H 12875 8450 50  0000 L CNN
F 1 "100u" H 12875 8250 50  0000 L CNN
F 2 "Capacitors_ThroughHole:C_Radial_D5_L6_P2.5" H 12888 8200 50  0001 C CNN
F 3 "" H 12850 8350 50  0000 C CNN
	1    12850 8350
	1    0    0    -1  
$EndComp
Connection ~ 12000 8200
Wire Wire Line
	12700 8200 13150 8200
$Comp
L ZENER D1
U 1 1 572878A5
P 13150 8400
F 0 "D1" H 13150 8500 50  0000 C CNN
F 1 "5v1" H 13150 8300 50  0000 C CNN
F 2 "Diodes_SMD:MELF_Handsoldering" H 13150 8400 50  0001 C CNN
F 3 "" H 13150 8400 50  0000 C CNN
	1    13150 8400
	0    1    1    0   
$EndComp
Connection ~ 12850 8200
Wire Wire Line
	13150 8700 13150 8600
Connection ~ 11450 8700
Wire Wire Line
	12000 8500 12000 8700
Connection ~ 12000 8700
Wire Wire Line
	12850 8500 12850 8700
Connection ~ 12850 8700
Wire Wire Line
	11750 8400 11850 8400
Wire Wire Line
	11850 8400 11850 8100
Wire Wire Line
	11850 8100 13550 8100
Wire Wire Line
	13150 8200 13150 8100
$Comp
L D_Schottky D-VUSB2
U 1 1 572893C5
P 13400 8700
F 0 "D-VUSB2" H 13400 8800 50  0000 C CNN
F 1 "D_Schottky" H 13400 8600 50  0000 C CNN
F 2 "Diodes_SMD:SMA_Handsoldering" H 13400 8700 50  0001 C CNN
F 3 "" H 13400 8700 50  0000 C CNN
	1    13400 8700
	1    0    0    -1  
$EndComp
$Comp
L USB_A P1
U 1 1 5728A075
P 13850 8300
F 0 "P1" H 14050 8100 50  0000 C CNN
F 1 "USB_A" H 13800 8500 50  0000 C CNN
F 2 "Connect:USB_A" V 13800 8200 50  0001 C CNN
F 3 "" V 13800 8200 50  0000 C CNN
	1    13850 8300
	0    1    1    0   
$EndComp
Connection ~ 13150 8100
Connection ~ 13150 8700
Wire Wire Line
	13950 8600 13550 8600
Wire Wire Line
	13550 8400 13550 8700
Connection ~ 13550 8600
Wire Wire Line
	13550 8700 13650 8700
Text Label 13650 8700 0    60   ~ 0
ADC_USB
Wire Wire Line
	10750 8200 10750 8000
Wire Wire Line
	6900 4500 7150 4500
Text Label 7150 4500 0    60   ~ 0
L-IND
$Comp
L R R-L-IND1
U 1 1 57284423
P 8300 6350
F 0 "R-L-IND1" V 8380 6350 50  0000 C CNN
F 1 "330" V 8300 6350 50  0000 C CNN
F 2 "Resistors_SMD:R_0805_HandSoldering" V 8230 6350 50  0001 C CNN
F 3 "" H 8300 6350 50  0000 C CNN
	1    8300 6350
	0    1    1    0   
$EndComp
$Comp
L LED L-IND1
U 1 1 57284429
P 8750 6350
F 0 "L-IND1" H 8750 6450 50  0000 C CNN
F 1 "LED" H 8750 6250 50  0000 C CNN
F 2 "LEDs:LED-0805" H 8750 6350 50  0001 C CNN
F 3 "" H 8750 6350 50  0000 C CNN
	1    8750 6350
	-1   0    0    1   
$EndComp
Text Label 8050 6350 0    60   ~ 0
L-IND
$Comp
L GND #PWR24
U 1 1 57284430
P 8950 6450
F 0 "#PWR24" H 8950 6200 50  0001 C CNN
F 1 "GND" H 8950 6300 50  0000 C CNN
F 2 "" H 8950 6450 50  0000 C CNN
F 3 "" H 8950 6450 50  0000 C CNN
	1    8950 6450
	1    0    0    -1  
$EndComp
Wire Wire Line
	8550 6350 8450 6350
Wire Wire Line
	8150 6350 8050 6350
Wire Wire Line
	8950 6350 8950 6450
$EndSCHEMATC
