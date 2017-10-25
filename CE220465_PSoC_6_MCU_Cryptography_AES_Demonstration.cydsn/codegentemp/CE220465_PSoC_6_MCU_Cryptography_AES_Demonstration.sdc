# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\kiwamu\Downloads\CE220465\CE220465_PSoC_6_MCU_Cryptography_AES_Demonstration.cydsn\CE220465_PSoC_6_MCU_Cryptography_AES_Demonstration.cyprj
# Date: Wed, 25 Oct 2017 07:52:26 GMT
#set_units -time ns
create_clock -name {CyILO} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyLFClk} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/lfclk}]]
create_clock -name {CyFLL} -period 10 -waveform {0 5} [list [get_pins {ClockBlock/fll}]]
create_clock -name {CyHFClk0} -period 10 -waveform {0 5} [list [get_pins {ClockBlock/hfclk_0}]]
create_clock -name {CyFastClk} -period 10 -waveform {0 5} [list [get_pins {ClockBlock/fastclk}]]
create_clock -name {CyPeriClk} -period 20 -waveform {0 10} [list [get_pins {ClockBlock/periclk}]]
create_generated_clock -name {CySlowClk} -source [get_pins {ClockBlock/periclk}] -edges {1 2 3} [list [get_pins {ClockBlock/slowclk}]]
create_generated_clock -name {UART_SCBCLK} -source [get_pins {ClockBlock/periclk}] -edges {1 435 869} [list [get_pins {ClockBlock/ff_div_0}]]
create_clock -name {CyPeriClk_App} -period 20 -waveform {0 10} [list [get_pins {ClockBlock/periclk_App}]]
create_clock -name {CyIMO} -period 125 -waveform {0 62.5} [list [get_pins {ClockBlock/imo}]]


# Component constraints for C:\Users\kiwamu\Downloads\CE220465\CE220465_PSoC_6_MCU_Cryptography_AES_Demonstration.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\kiwamu\Downloads\CE220465\CE220465_PSoC_6_MCU_Cryptography_AES_Demonstration.cydsn\CE220465_PSoC_6_MCU_Cryptography_AES_Demonstration.cyprj
# Date: Wed, 25 Oct 2017 07:52:24 GMT