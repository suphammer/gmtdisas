.equ PA_ODR,	0x5000	; Port A data output latch register
.equ PA_IDR,	0x5001	; Port A input pin value register
.equ PA_DDR,	0x5002	; Port A data direction register
.equ PA_CR1,	0x5003	; Port A control register 1
.equ PA_CR2,	0x5004	; Port A control register 2
.equ PB_ODR,	0x5005	; Port B data output latch register
.equ PB_IDR,	0x5006	; Port B input pin value register
.equ PB_DDR,	0x5007	; Port B data direction register
.equ PB_CR1,	0x5008	; Port B control register 1
.equ PB_CR2,	0x5009	; Port B control register 2
.equ PC_ODR,	0x500a	; Port C data output latch register
.equ PC_IDR,	0x500b	; Port C input pin value register
.equ PC_DDR,	0x500c	; Port C data direction register
.equ PC_CR1,	0x500d	; Port C control register 1
.equ PC_CR2,	0x500e	; Port C control register 2
.equ PD_ODR,	0x500f	; Port D data output latch register
.equ PD_IDR,	0x5010	; Port D input pin value register
.equ PD_DDR,	0x5011	; Port D data direction register
.equ PD_CR1,	0x5012	; Port D control register 1
.equ PD_CR2,	0x5013	; Port D control register 2
.equ PE_ODR,	0x5014	; Port E data output latch register
.equ PE_IDR,	0x5015	; Port E input pin value register
.equ PE_DDR,	0x5016	; Port E data direction register
.equ PE_CR1,	0x5017	; Port E control register 1
.equ PE_CR2,	0x5018	; Port E control register 2
.equ PF_ODR,	0x5019	; Port F data output latch register
.equ PF_IDR,	0x501a	; Port F input pin value register
.equ PF_DDR,	0x501b	; Port F data direction register
.equ PF_CR1,	0x501c	; Port F control register 1
.equ PF_CR2,	0x501d	; Port F control register 2
.equ FLASH_CR1,	0x505A	; Flash control register 1
.equ FLASH_CR2,	0x505B	; Flash control register 2
.equ FLASH_NCR2,	0x505C	; Flash complementary control register 2
.equ FLASH_FPR,	0x505D	; Flash protection register
.equ FLASH_NFPR,	0x505E	; Flash complementary protection register
.equ FLASH_IAPSR,	0x505F	; Flash in-application programming status register
.equ FLASH_PUKR,	0x5062	; Flash Program memory unprotection register
.equ FLASH_DUKR,	0x5064	; Data EEPROM unprotection register
.equ EXTI_CR1,	0x50A0	; External interrupt control register 1
.equ EXTI_CR2,	0x50A1	; External interrupt control register 2
.equ RST_SR,	0x50B3	; Reset status register
.equ CLK_ICKR,	0x50C0	; Internal clock control register
.equ CLK_ECKR,	0x50C1	; External clock control register
.equ CLK_CMSR,	0x50C3	; Clock master status register
.equ CLK_SWR,	0x50C4	; Clock master switch register
.equ CLK_SWCR,	0x50C5	; Clock switch control register
.equ CLK_CKDIVR,	0x50C6	; Clock divider register
.equ CLK_PCKENR1,	0x50C7	; Peripheral clock gating register 1
.equ CLK_CSSR,	0x50C8	; Clock security system register
.equ CLK_CCOR,	0x50C9	; Configurable clock control register
.equ CLK_PCKENR2,	0x50CA	; Peripheral clock gating register 2
.equ CLK_HSITRIMR,	0x50CC	; HSITRIMR  0x50CC HSI clock calibration trimming register
.equ CLK_SWIMCCR,	0x50CD	; SWIMCCR   0x50CD SWIM clock control register
.equ WWDG_CR,	0x50D1	; WWDG_CR     0x50D1 WWDG Control Register
.equ WWDG_WR,	0x50D2	; WWDR Window Register
.equ IWDG_KR,	0x50E0	; IWDG_KR    0x50E0 IWDG Key Register
.equ IWDG_PR,	0x50E1	; IWDG_PR    0x50E1 IWDG Prescaler Register
.equ IWDG_RLR,	0x50E2	; IWDG_RLR   0x50E2 IWDG Reload Register
.equ AWU_CSR1,	0x50F0	; AWU_CSR1   0x50F0 AWU control/status register 1
.equ AWU_APR,	0x50F1	; AWU_APR    0x50F1 AWU asynchronous prescaler buffer register
.equ AWU_TBR,	0x50F2	; AWU_TBR    0x50F2 AWU timebase selection register
.equ BEEP_CSR,	0x50F3	; BEEP_CSR   0x50F3 BEEP Control/Status Register
.equ SPI_CR1,	0x5200	; SPI_CR1    0x5200 SPI Control Register 1
.equ SPI_CR2,	0x5201	; SPI_CR2    0x5201 SPI Control Register 2
.equ SPI_ICR,	0x5202	; SPI_ICR    0x5202 SPI Interrupt Control Register
.equ SPI_SR,	0x5203	; SPI_SR     0x5203 SPI Status Register
.equ SPI_DR,	0x5204	; SPI_DR     0x5204 SPI Data Register
.equ SPI_CRCPR,	0x5205	; SPI_CRCPR  0x5205 SPI CRC Polynomial Register
.equ SPI_RXCRCR,	0x5206	; SPI_RXCRCR 0x5206 SPI Rx CRC Register
.equ SPI_TXCRCR,	0x5207	; SPI_TXCRCR 0x5207 SPI Tx CRC Register
.equ I2C_CR1,	0x5210	; I2C_CR1    0x5210 I2C control register 1
.equ I2C_CR2,	0x5211	; I2C_CR2    0x5211 I2C control register 2
.equ I2C_FREQR,	0x5212	; I2C_FREQR  0x5212 I2C frequency register
.equ I2C_OARL,	0x5213	; I2C_OARL   0x5213 I2C Own address register low
.equ I2C_OARH,	0x5214	; I2C_OARH   0x5214 I2C Own address register high
.equ I2C_DR,	0x5216	; I2C_DR     0x5216 I2C data register
.equ I2C_SR1,	0x5217	; I2C_SR1    0x5217 I2C status register 1
.equ I2C_SR2,	0x5218	; I2C_SR2    0x5218 I2C status register 2
.equ I2C_SR3,	0x5219	; I2C_SR3    0x5219 I2C status register 3
.equ I2C_ITR,	0x521A	; I2C_ITR    0x521A I2C interrupt control register
.equ I2C_CCRL,	0x521B	; I2C_CCRL   0x521B I2C Clock control register low
.equ I2C_CCRH,	0x521C	; I2C_CCRH   0x521C I2C Clock control register high
.equ I2C_TRISER,	0x521D	; I2C_TRISER 0x521D I2C TRISE register
.equ I2C_PECR,	0x521E	; I2C_PECR   0x521E I2C packet error checking register
.equ UART1_SR,	0x5230	; USART Status Register
.equ UART1_DR,	0x5231	; USART Data Register
.equ UART1_BRR1,	0x5232	; USART Baud Rate Register 1
.equ UART1_BRR2,	0x5233	; USART Baud Rate Register 2
.equ UART1_CR1,	0x5234	; USART Control Register 1
.equ UART1_CR2,	0x5235	; USART Control Register 2
.equ UART1_CR3,	0x5236	; USART Control Register 3
.equ UART1_CR4,	0x5237	; USART Control Register 4
.equ UART1_CR5,	0x5238	; USART Control Register 5
.equ UART1_GTR,	0x5239	; USART Guard time Register
.equ UART1_PSCR,	0x523A	; USART Prescaler Register
.equ TIM1_CR1,	0x5250	; TIM1_CR1   0x5250 TIM1 Control register 1
.equ TIM1_CR2,	0x5251	; TIM1_CR2   0x5251 TIM1 Control register 2
.equ TIM1_SMCR,	0x5252	; TIM1_SMCR  0x5252 TIM1 Slave Mode Control register
.equ TIM1_ETR,	0x5253	; TIM1_ETR   0x5253 TIM1 external trigger register
.equ TIM1_IER,	0x5254	; TIM1_IER   0x5254 TIM1 Interrupt enable register
.equ TIM1_SR1,	0x5255	; TIM1_SR1   0x5255 TIM1 Status register 1
.equ TIM1_SR2,	0x5256	; TIM1_SR2   0x5256 TIM1 Status register 2
.equ TIM1_EGR,	0x5257	; TIM1_EGR   0x5257 TIM1 Event Generation register
.equ TIM1_CCMR1,	0x5258	; TIM1_CCMR1 0x5258 TIM1 Capture/Compare mode register 1
.equ TIM1_CCMR2,	0x5259	; TIM1_CCMR2 0x5259 TIM1 Capture/Compare mode register 2
.equ TIM1_CCMR3,	0x525A	; TIM1_CCMR3 0x525A TIM1 Capture/Compare mode register 3
.equ TIM1_CCMR4,	0x525B	; TIM1_CCMR4 0x525B TIM1 Capture/Compare mode register 4
.equ TIM1_CCER1,	0x525C	; TIM1_CCER1 0x525C TIM1 Capture/Compare enable register 1
.equ TIM1_CCER2,	0x525D	; TIM1_CCER2 0x525D TIM1 Capture/Compare enable register 2
.equ TIM1_CNTRH,	0x525E	; TIM1_CNTRH 0x525E TIM1 Counter High
.equ TIM1_CNTRL,	0x525F	; TIM1_CNTRL 0x525F TIM1 Counter Low
.equ TIM1_PSCRH,	0x5260	; TIM1_PSCRH 0x5260 TIM1 Prescaler Register High
.equ TIM1_PSCRL,	0x5261	; TIM1_PSCRL 0x5261 TIM1 Prescaler Register Low
.equ TIM1_ARRH,	0x5262	; TIM1_ARRH  0x5262 TIM1 Auto-Reload Register High
.equ TIM1_ARRL,	0x5263	; TIM1_ARRL  0x5263 TIM1 Auto-Reload Register Low
.equ TIM1_RCR,	0x5264	; TIM1_RCR   0x5264 TIM1 Repetition counter register
.equ TIM1_CCR1H,	0x5265	; TIM1_CCR1H 0x5265 TIM1 Capture/Compare Register 1 High
.equ TIM1_CCR1L,	0x5266	; TIM1_CCR1L 0x5266 TIM1 Capture/Compare Register 1 Low
.equ TIM1_CCR2H,	0x5267	; TIM1_CCR2H 0x5267 TIM1 Capture/Compare Register 2 High
.equ TIM1_CCR2L,	0x5268	; TIM1_CCR2L 0x5268 TIM1 Capture/Compare Register 2 Low
.equ TIM1_CCR3H,	0x5269	; TIM1_CCR3H 0x5269 TIM1 Capture/Compare Register 3 High
.equ TIM1_CCR3L,	0x526A	; TIM1_CCR3L 0x526A TIM1 Capture/Compare Register 3 Low
.equ TIM1_CCR4H,	0x526B	; TIM1_CCR4H 0x526B TIM1 Capture/Compare Register 4 High
.equ TIM1_CCR4L,	0x526C	; TIM1_CCR4L 0x526C TIM1 Capture/Compare Register 4 Low
.equ TIM1_BKR,	0x526D	; TIM1_BKR   0x526D TIM1 Break register
.equ TIM1_DTR,	0x526E	; TIM1_DTR   0x526E TIM1 Dead-time register
.equ TIM1_OISR,	0x526F	; TIM1_OISR  0x526F TIM1 Output idle state register
.equ TIM2_CR1,	0x5300	; TIM2_CR1   0x5300 TIM2 Control register 1
.equ TIM2_IER,	0x5303	; TIM2_IER   0x5303 TIM2 Interrupt enable register
.equ TIM2_SR1,	0x5304	; TIM2_SR1   0x5304 TIM2 Status register 1
.equ TIM2_SR2,	0x5305	; TIM2_SR2   0x5305 TIM2 Status register 2
.equ TIM2_EGR,	0x5306	; TIM2_EGR   0x5306 TIM2 Event Generation register
.equ TIM2_CCMR1,	0x5307	; TIM2_CCMR1 0x5307 TIM2 Capture/Compare mode register 1
.equ TIM2_CCMR2,	0x5308	; TIM2_CCMR2 0x5308 TIM2 Capture/Compare mode register 2
.equ TIM2_CCMR3,	0x5309	; TIM2_CCMR3 0x5309 TIM2 Capture/Compare mode register 2
.equ TIM2_CCER1,	0x530A	; TIM2_CCER1 0x530A TIM2 Capture/Compare enable register 1
.equ TIM2_CCER2,	0x530B	; TIM2_CCER2 0x530B TIM2 Capture/Compare enable register 2
.equ TIM2_CNTRH,	0x530C	; TIM2_CNTRH 0x530C TIM2 Counter High
.equ TIM2_CNTRL,	0x530D	; TIM2_CNTRL 0x530D TIM2 Counter Low
.equ TIM2_PSCR,	0x530E	; TIM2_PSCR  0x530E TIM2 Prescaler register
.equ TIM2_ARRH,	0x530F	; TIM2_ARRH  0x530F TIM2 Auto-Reload Register High
.equ TIM2_ARRL,	0x5310	; TIM2_ARRL  0x5310 TIM2 Auto-Reload Register Low
.equ TIM2_CCR1H,	0x5311	; TIM2_CCR1H 0x5311 TIM2 Capture/Compare Register 1 High
.equ TIM2_CCR1L,	0x5312	; TIM2_CCR1L 0x5312 TIM2 Capture/Compare Register 1 Low
.equ TIM2_CCR2H,	0x5313	; TIM2_CCR2H 0x5313 TIM2 Capture/Compare Register 2 High
.equ TIM2_CCR2L,	0x5314	; TIM2_CCR2L 0x5314 TIM2 Capture/Compare Register 2 Low
.equ TIM2_CCR3H,	0x5315	; TIM2_CCR3H 0x5315 TIM2 Capture/Compare Register 3 High
.equ TIM2_CCR3L,	0x5316	; TIM2_CCR3L 0x5316 TIM2 Capture/Compare Register 3 Low
.equ TIM4_CR1,	0x5340	; TIM4_CR1  0x5340 TIM4 Control Register 1
.equ TIM4_IER,	0x5343	; TIM4_IER  0x5343 TIM4 Interrupt Enable Register
.equ TIM4_SR,	0x5344	; TIM4_SR   0x5344 TIM4 Status Register
.equ TIM4_EGR,	0x5345	; TIM4_EGR  0x5345 TIM4 Event Generation Register
.equ TIM4_CNTR,	0x5346	; TIM4_CNTR 0x5346 TIM4 Counter
.equ TIM4_PSCR,	0x5347	; TIM4_PSCR 0x5347 TIM4 Prescaler Register
.equ TIM4_ARR,	0x5348	; TIM4_ARR  0x5348 TIM4 Auto-Reload Register
.equ ADC_CSR,	0x5400	; ADC1 control/status register
.equ ADC_CR1,	0x5401	; ADC1 Configuration register 1
.equ ADC_CR2,	0x5402	; ADC1 Configuration register 2
.equ ADC_CR3,	0x5403	; ADC1 Configuration register 3
.equ ADC_DRH,	0x5404	; ADC_DRH    0x5404 ADC Data Register High
.equ ADC_DRL,	0x5405	; ADC_DRL    0x5405 ADC Data Register Low
.equ ADC_TDRH,	0x5406	; ADC_TDRH   0x5406 ADC Schmitt trigger disable register High
.equ ADC_TDRL,	0x5407	; ADC_TDRL   0x5407 ADC Schmitt trigger disable register Low
.equ ADC_HTRH,	0x5408	; ADC_HTRH   0x5408 ADC high threshold register high
.equ ADC_HTRL,	0x5409	; ADC_HTRL   0x5409 ADC high threshold register low
.equ ADC_LTRH,	0x540A	; ADC_LTRH   0x540A ADC low threshold register high
.equ ADC_LTRL,	0x540B	; ADC_LTRL   0x540B ADC low threshold register low
.equ ADC_AWSRH,	0x540C	; ADC_AWSRH  0x540C ADC analog watchdog status register high
.equ ADC_AWSRL,	0x540D	; ADC_AWSRL  0x540D ADC analog watchdog status register low
.equ ADC_AWCRH,	0x540E	; ADC_AWCRH  0x540E ADC analog watchdog control register high
.equ ADC_AWCRL,	0x540F	; ADC_AWCRL  0x540F ADC analog watchdog control register low
.equ A,	0x7F00	; Accumulator
.equ PCE,	0x7F01	; Program counter extended
.equ PCH,	0x7F02	; Program counter high
.equ PCL,	0x7F03	; Program counter low
.equ XH,	0x7F04	; XH    0x7F04 X index register high
.equ XL,	0x7F05	; XL    0x7F05 X index register low
.equ YH,	0x7F06	; YH    0x7F06 Y index register high
.equ YL,	0x7F07	; YL    0x7F07 Y index register low
.equ SPH,	0x7F08	; Stack pointer high
.equ SPL,	0x7F09	; Stack pointer low
.equ CCR,	0x7F0A	; Condition code register
.equ CFG_GCR,	0x7F60	; CFG_GCR 0x7F60 CFG Global configuration register
.equ ITC_SPR1,	0x7F70	; Interrupt Software priority register 1
.equ ITC_SPR2,	0x7F71	; Interrupt Software priority register 2
.equ ITC_SPR3,	0x7F72	; Interrupt Software priority register 3
.equ ITC_SPR4,	0x7F73	; Interrupt Software priority register 4
.equ ITC_SPR5,	0x7F74	; Interrupt Software priority register 5
.equ ITC_SPR6,	0x7F75	; Interrupt Software priority register 6
.equ ITC_SPR7,	0x7F76	; Interrupt Software priority register 7
.equ ITC_SPR8,	0x7F77	; Interrupt Software priority register 8
.equ SWIM_CSR,	0x7F80	; SWIM_CSR  0x7F80  SWIM control status register
.equ DM_BK1RE,	0x7F90	; DM_BK1RE  0x7F90  DM breakpoint 1 register extended byte
.equ DM_BK1RH,	0x7F91	; DM_BK1RH  0x7F91  DM breakpoint 1 register high byte
.equ DM_BK1RL,	0x7F92	; DM_BK1RL  0x7F92  DM breakpoint 1 register low byte
.equ DM_BK2RE,	0x7F93	; DM_BK2RE  0x7F93  DM breakpoint 2 register extended byte
.equ DM_BK2RH,	0x7F94	; DM_BK2RH  0x7F94  DM breakpoint 2 register high byte
.equ DM_BK2RL,	0x7F95	; DM_BK2RL  0x7F95  DM breakpoint 2 register low byte
.equ DM_CR1,	0x7F96	; DM_CR1    0x7F96  DM debug module control register 1
.equ DM_CR2,	0x7F97	; DM_CR2    0x7F97  DM debug module control register 2
.equ DM_CSR1,	0x7F98	; DM_CSR1   0x7F98  DM debug module control/status register 1
.equ DM_CSR2,	0x7F99	; DM_CSR2   0x7F99  DM debug module control/status register 2
.equ DM_ENFCTR,	0x7F9A	; DM_ENFCTR 0x7F9A  DM enable function register


;-------------------------------------------------------------------
; GPIOR bit definitions
;-------------------------------------------------------------------
; FLASH_CR1 bits
.equ FLASH_CR1_IE_bp,		1
.equ FLASH_CR1_FIX_bp,		0

; FLASH_CR2 bits
.equ FLASH_CR2_OPT_bp,		7
.equ FLASH_CR2_WPRG_bp,		6
.equ FLASH_CR2_ERASE_bp,	5
.equ FLASH_CR2_FPRG_bp,		4
.equ FLASH_CR2_PRG_bp,		0

; FLASH_IAPSR bits
.equ FLASH_IAPSR_DUL_bp,	3
.equ FLASH_IAPSR_EOP_bp,	2
.equ FLASH_IAPSR_PUL_bp,	1
.equ FLASH_IAPSR_WR_PG_DIS_bp,	0

; CLK_CKDIVR bits
.equ CLK_CKDIVR_CKM0_bp,	0
.equ CLK_CKDIVR_CKM1_bp,	1
.equ CLK_CKDIVR_CKM2_bp,	2

.equ CLK_CKDIVR_CKM_DIV1_gc,	0x00
.equ CLK_CKDIVR_CKM_DIV2_gc,	0x01
.equ CLK_CKDIVR_CKM_DIV4_gc,	0x02
.equ CLK_CKDIVR_CKM_DIV8_gc,	0x03
.equ CLK_CKDIVR_CKM_DIV16_gc,	0x04
.equ CLK_CKDIVR_CKM_DIV32_gc,	0x05
.equ CLK_CKDIVR_CKM_DIV64_gc,	0x06
.equ CLK_CKDIVR_CKM_DIV128_gc,	0x07

; CLK_PCKENR1 bits
.equ CLK_PCKENR1_TIM2_bp,	0
.equ CLK_PCKENR1_TIM3_bp,	1
.equ CLK_PCKENR1_TIM4_bp,	2
.equ CLK_PCKENR1_I2C1_bp,	3
.equ CLK_PCKENR1_SPI1_bp,	4
.equ CLK_PCKENR1_USART1_bp,	5
.equ CLK_PCKENR1_BEEP_bp,	6
.equ CLK_PCKENR1_DAC_bp,	7

; CLK_PCKENR2 bits
.equ CLK_PCKENR2_ADC1_bp,	0
.equ CLK_PCKENR2_TIM1_bp,	1
.equ CLK_PCKENR2_RTC_bp,	2
.equ CLK_PCKENR2_LCD_bp,	3
.equ CLK_PCKENR2_DMA1_bp,	4
.equ CLK_PCKENR2_COMP_bp,	5
.equ CLK_PCKENR2_BOOTROM_bp,	7

; CLK_PCKENR3 bits
.equ CLK_PCKENR3_AES_bp,	0
.equ CLK_PCKENR3_TIM5_bp,	1
.equ CLK_PCKENR3_SPI2_bp,	2
.equ CLK_PCKENR3_USART2_bp,	3
.equ CLK_PCKENR3_USART3_bp,	4
.equ CLK_PCKENR3_CSS_LSE_bp,	5

; SPI_CR1 bits
.equ SPI_CR1_LSBFIRST_bp,	7
.equ SPI_CR1_SPE_bp,		6
.equ SPI_CR1_BR2_bp,		5
.equ SPI_CR1_BR1_bp,		4
.equ SPI_CR1_BR0_bp,		3
.equ SPI_CR1_MSTR_bp,		2
.equ SPI_CR1_CPOL_bp,		1
.equ SPI_CR1_CPHA_bp,		0

; SPI_CR2 bits
.equ SPI_CR2_BDM_bp,		7
.equ SPI_CR2_BDOE_bp,		6
.equ SPI_CR2_RXONLY_bp,		2
.equ SPI_CR2_SSM_bp,		1
.equ SPI_CR2_SSI_bp,		0

; SPI_ICR bits
.equ SPI_ICR_TXIE_bp,		7
.equ SPI_ICR_RXIE_bp,		6
.equ SPI_ICR_ERRIE_bp,		5
.equ SPI_ICR_WKIE_bp,		4

; SPI_SR bits
.equ SPI_SR_BSY_bp,		7
.equ SPI_SR_OVR_bp,		6
.equ SPI_SR_MODF_bp,		5
.equ SPI_SR_WKUP_bp,		3
.equ SPI_SR_TXE_bp,		1
.equ SPI_SR_RXNE_bp,		0

; USART_CR1 bits 
.equ USART_CR1_R8_bp,		7
.equ USART_CR1_T8_bp,		6
.equ USART_CR1_UARTD_bp,	5
.equ USART_CR1_M_bp,		4
.equ USART_CR1_WAKE_bp,		3
.equ USART_CR1_PCEN_bp,		2
.equ USART_CR1_PS_bp,		1
.equ USART_CR1_PIEN_bp,		0

; USART_CR2 bits
.equ USART_CR2_TIEN_bp,		7
.equ USART_CR2_TCIEN_bp,	6
.equ USART_CR2_RIEN_bp,		5
.equ USART_CR2_ILIEN_bp,	4
.equ USART_CR2_TEN_bp,		3
.equ USART_CR2_REN_bp,		2
.equ USART_CR2_RWU_bp,		1
.equ USART_CR2_SBK_bp,		0

; USART_CR3 bits 
.equ USART_CR3_LINEN_bp,	6
.equ USART_CR3_STOP2_bp,	5
.equ USART_CR3_STOP1_bp,	4
.equ USART_CR3_CLKEN_bp,	3
.equ USART_CR3_CPOL_bp,		2
.equ USART_CR3_CPHA_bp,		1
.equ USART_CR3_LBCL_bp,		0

; USART_SR bits
.equ USART_SR_TXE_bp,		7
.equ USART_SR_TC_bp,		6
.equ USART_SR_RXNE_bp,		5
.equ USART_SR_IDLE_bp,		4
.equ USART_SR_OR_bp,		3
.equ USART_SR_NF_bp,		2
.equ USART_SR_FE_bp,		1
.equ USART_SR_PE_bp,		0

; TIM_IER bits 
.equ TIM_IER_BIE_bp,		7
.equ TIM_IER_TIE_bp,		6
.equ TIM_IER_COMIE_bp,		5
.equ TIM_IER_CC4IE_bp,		4
.equ TIM_IER_CC3IE_bp,		3
.equ TIM_IER_CC2IE_bp,		2
.equ TIM_IER_CC1IE_bp,		1
.equ TIM_IER_UIE_bp,		0

; TIM_CR1 bits 
.equ TIM_CR1_APRE_bp,		7
.equ TIM_CR1_CMSH_bp,		6
.equ TIM_CR1_CMSL_bp,		5
.equ TIM_CR1_DIR_bp,		4
.equ TIM_CR1_OPM_bp,		3
.equ TIM_CR1_URS_bp,		2
.equ TIM_CR1_UDIS_bp,		1
.equ TIM_CR1_CEN_bp,		0

; TIM_SR1 bits 
.equ TIM_SR1_BIF_bp,		7
.equ TIM_SR1_TIF_bp,		6
.equ TIM_SR1_COMIF_bp,		5
.equ TIM_SR1_CC4IF_bp,		4
.equ TIM_SR1_CC3IF_bp,		3
.equ TIM_SR1_CC2IF_bp,		2
.equ TIM_SR1_CC1IF_bp,		1
.equ TIM_SR1_UIF_bp,		0

; TIM_EGR bits
.equ TIM_EGR_BG_bp,			7
.equ TIM_EGR_TG_bp,			6
.equ TIM_EGR_CC2G_bp,		2
.equ TIM_EGR_CC1G_bp,		1
.equ TIM_EGR_UG_bp,			0

; CFG_GCR
.equ CFG_GCR_SWD_bp,		0
.equ CFG_GCR_AL_bp,		1

; CLK_CBEEPR
.equ CLK_CBEEPR_SWBSY_bp,	0
.equ CLK_CBEEPR_SEL0_bp,	1
.equ CLK_CBEEPR_SEL1_bp,	2

.equ CLK_CBEEPR_NO_CLOCK_gc,	0x00
.equ CLK_CBEEPR_LSI_gc,		0x02
.equ CLK_CBEEPR_LSE_gc,		0x04

; TIM4_CR1
.equ TIM4_CR1_CEN_bp,		0
.equ TIM4_CR1_UDIS_bp,		1
.equ TIM4_CR1_URS_bp,		2
.equ TIM4_CR1_OPM_bp,		3
.equ TIM4_CR1_ARPE_bp,		7

; TIM4_SR
.equ TIM4_SR_UIF_bp,		0
.equ TIM4_SR_TIF_bp,		6

; TIM4_IER
.equ TIM4_IER_UIE_bp,		0
.equ TIM4_IER_TIE_bp,		6

; BEEP_CSR2
.equ BEEP_CSR2_BEEPDIV0,	0
.equ BEEP_CSR2_BEEPDIV1,	1
.equ BEEP_CSR2_BEEPDIV2,	2
.equ BEEP_CSR2_BEEPDIV3,	3
.equ BEEP_CSR2_BEEPDIV4,	4
.equ BEEP_CSR2_BEEPEN_bp,	5
.equ BEEP_CSR2_BEEPSEL0_bp,	6
.equ BEEP_CSR2_BEEPSEL1_bp,	7

; I2C1_CR1
.equ I2C_CR1_PE_bp,		0
.equ I2C_CR1_SMBUS_bp,		1
.equ I2C_CR1_SMBTYPE_bp,	3
.equ I2C_CR1_ENARP_bp,		4
.equ I2C_CR1_ENPEC_bp,		5
.equ I2C_CR1_ENGC_bp,		6
.equ I2C_CR1_NOSTRETCH_bp,	7

; I2C1_CR2
.equ I2C_CR2_START_bp,		0
.equ I2C_CR2_STOP_bp,		1
.equ I2C_CR2_ACK_bp,		2
.equ I2C_CR2_POS_bp,		3
.equ I2C_CR2_PEC_bp,		4
.equ I2C_CR2_ALERT_bp,		5
.equ I2C_CR2_SWRST_bp,		7

; I2C_ITR
.equ I2C_ITR_ITERREN_bp,	0
.equ I2C_ITR_ITEVTEN_bp,	1
.equ I2C_ITR_ITBUFEN_bp,	2
.equ I2C_ITR_DMAEN_bp,		3
.equ I2C_ITR_LAST_bp,		4

; I2C_SR1
.equ I2C_SR1_SB_bp,		0
.equ I2C_SR1_ADDR_bp,		1
.equ I2C_SR1_BTF_bp,		2
.equ I2C_SR1_ADD10_bp,		3
.equ I2C_SR1_STOPF_bp,		4
.equ I2C_SR1_RXNE_bp,		6
.equ I2C_SR1_TXE_bp,		7

; I2C_SR2
.equ I2C_SR2_BERR_bp,		0
.equ I2C_SR2_ARLO_bp,		1
.equ I2C_SR2_AF_bp,		2
.equ I2C_SR2_OVR_bp,		3
.equ I2C_SR2_PECERR_bp,		4
.equ I2C_SR2_WURF_bp,		5
.equ I2C_SR2_TIMEOUT_bp,	6
.equ I2C_SR2_SMBALERT_bp,	7

; I2C_SR3
.equ I2C_SR3_MSL_bp,		0
.equ I2C_SR3_BUSY_bp,		1
.equ I2C_SR3_TRA_bp,		2
.equ I2C_SR3_GENCALL_bp,	4
.equ I2C_SR3_SMBDEFAULT_bp,	5
.equ I2C_SR3_SMBHOST_bp,	6
.equ I2C_SR3_DUALF_bp,		7

;DMA_GCSR
.equ DMA_GCSR_GEN_bp,		0
.equ DMA_GCSR_GP_bp,		1
.equ DMA_GCSR_TO_bp,		2

;DMA_GIR1
.equ DMA_GIR1_IFC0_bp,		0
.equ DMA_GIR1_IFC1_bp,		1
.equ DMA_GIR1_IFC2_bp,		2
.equ DMA_GIR1_IFC3_bp,		3

;DMA_CCR
.equ DMA_CCR_EN_bp,		0
.equ DMA_CCR_TCIE_bp,		1
.equ DMA_CCR_HTIE_bp,		2
.equ DMA_CCR_DIR_bp,		3
.equ DMA_CCR_CIRC_bp,		4
.equ DMA_CCR_MINCDEC_bp,	5
.equ DMA_CCR_MEM_bp,		6

;DMA_CxSPR
.equ DMA_CSPR_TCIF_bp,		1
.equ DMA_CSPR_HTIF_bp,		2
.equ DMA_CSPR_TSIZE_bp,		3
.equ DMA_CSPR_PL0_bp,		4
.equ DMA_CSPR_PL1_bp,		5
.equ DMA_CSPR_PEND_bp,		6
.equ DMA_CSPR_BUSY_bp,		7


;ADC_CR1
.equ ADC_CR1_ADON_bp,		0
.equ ADC_CR1_START_bp,		1
.equ ADC_CR1_CONT_bp,		2
.equ ADC_CR1_EOCIE_bp,		3
.equ ADC_CR1_AWDIE_bp,		4
.equ ADC_CR1_RES0_bp,		5
.equ ADC_CR1_RES1_bp,		6
.equ ADC_CR1_OVERIE_bp,		7
.equ ADC_CR1_ADON_START_CONT_gc,	0x07

;ADC_CR2
.equ ADC_CR2_SMTP0_bp,		0
.equ ADC_CR2_SMTP1_bp,		1
.equ ADC_CR2_SMTP2_bp,		2
.equ ADC_CR2_EXTSEL0_bp,	3
.equ ADC_CR2_EXTSEL1_bp,	4
.equ ADC_CR2_TRIG_EDGE0_bp,	5
.equ ADC_CR2_TRIG_EDGE1_bp,	6
.equ ADC_CR2_PRESC_bp,		7

;ADC_SQR1
.equ ADC_SQR1_CHSEL_SVREFINT_bp, 4
.equ ADC_SQR1_CHSEL_STS_bp,	5
.equ ADC_SQR1_DMAOFF_bp,	7

;ADC_TRIG1
.equ ADC_TRIG1_VREFINTON_bp,	4

;TIM_CCMR1/2
;output
.equ TIM_CCMR_CCS0_bp,		0
.equ TIM_CCMR_CCS1_bp,		1
.equ TIM_CCMR_OCFE_bp,		2
.equ TIM_CCMR_OCPE_bp,		3
.equ TIM_CCMR_OCM0_bp,		4
.equ TIM_CCMR_OCM1_bp,		5
.equ TIM_CCMR_OCM2_bp,		6
.equ TIM_CCMR_OCM_SET_gc,	0x10
.equ TIM_CCMR_OCM_RES_gc,	0x20
.equ TIM_CCMR_OCM_TGL_gc,	0x30
.equ TIM_CCMR_OCM_LOW_gc,	0x40
.equ TIM_CCMR_OCM_HIGH_gc,	0x50
.equ TIM_CCMR_OCM_PWM1_gc,	0x60
.equ TIM_CCMR_OCM_PWM2_gc,	0x70

;input
.equ TIM_CCMR_ICPSC_bp,		2
.equ TIM_CCMR_ICPSC_bp,		3
.equ TIM_CCMR_ICF0_bp,		4
.equ TIM_CCMR_ICF1_bp,		5
.equ TIM_CCMR_ICF2_bp,		6
.equ TIM_CCMR_ICF3_bp,		7

;TIM_CCER1
.equ TIM_CCER1_CC1E_bp,		0
.equ TIM_CCER1_CC1P_bp,		1
.equ TIM_CCER1_CC2E_bp,		4
.equ TIM_CCER1_CC2P_bp,		5

;TIM_BKR
.equ TIM_BKR_LOCK0_bp,		0
.equ TIM_BKR_LOCK1_bp,		1
.equ TIM_BKR_OSSI_bp,		2
.equ TIM_BKR_BKE_bp,		4
.equ TIM_BKR_BKP_bp,		5
.equ TIM_BKR_AOE_bp,		6
.equ TIM_BKR_MOE_bp,		7

;ADC_SR
.equ ADC_SR_EOC_bp,		0
.equ ADC_SR_AWD_bp,		1
.equ ADC_SR_OVER_bp,		2

;CLK_SWCR
.equ CLK_SWCR_SWBSY_bp,		0
.equ CLK_SWCR_SWEN_bp,		1
.equ CLK_SWCR_SWIEN_bp,		2
.equ CLK_SWCR_SWIF_bp,		3

;CLK_SWR
.equ CLK_SWR_HSI_gc,		0x01
.equ CLK_SWR_LSI_gc,		0x02
.equ CLK_SWR_HSE_gc,		0x04
.equ CLK_SWR_LSE_gc,		0x08

;CLK_ICKCR
.equ CLK_ICKCR_HSION_bp,	0
.equ CLK_ICKCR_HSIRDY_bp,	1
.equ CLK_ICKCR_LSION_bp,	2
.equ CLK_ICKCR_LSIRDY_bp,	3
.equ CLK_ICKCR_SAHALT_bp,	4
.equ CLK_ICKCR_FHWU_bp,		5
.equ CLK_ICKCR_BEEPAHALT_bp,	6

;CLK_CRTCR
.equ CLK_CRTCR_DIV_1_gc,	0x00
.equ CLK_CRTCR_DIV_2_gc,	0x20
.equ CLK_CRTCR_DIV_4_gc,	0x40
.equ CLK_CRTCR_DIV_8_gc,	0x60
.equ CLK_CRTCR_DIV_16_gc,	0x80
.equ CLK_CRTCR_DIV_32_gc,	0xA0
.equ CLK_CRTCR_DIV_64_gc,	0xC0
.equ CLK_CRTCR_DIV_128_gc,	0xE0

.equ CLK_CRTCR_SEL_NONE_gc,	0x00
.equ CLK_CRTCR_SEL_HSI_gc,	0x02
.equ CLK_CRTCR_SEL_LSI_gc,	0x04
.equ CLK_CRTCR_SEL_HSE_gc,	0x08
.equ CLK_CRTCR_SEL_LSE_gc,	0x10

.equ CLK_CRTCR_SWBSY_bp,	0

;RTC_CR1
.equ RTC_CR1_WUCKSEL_DIV16_gc,	0x00
.equ RTC_CR1_WUCKSEL_DIV8_gc,	0x01
.equ RTC_CR1_WUCKSEL_DIV4_gc,	0x02
.equ RTC_CR1_WUCKSEL_DIV2_gc,	0x03
.equ RTC_CR1_WUCKSEL_CK_SPRE_gc,	0x04
.equ RTC_CR1_WUCKSEL_2CK_SPRE_gc,	0x06

;RTC_CR2
.equ RTC_CR2_ALRAE_bp,		0
.equ RTC_CR2_WUTE_bp,		2
.equ RTC_CR2_ALRAIE_bp,		4
.equ RTC_CR2_WUTIE_bp,		6

;RTC_ISR2
.equ RTC_ISR2_ALRAF_bp,		0
.equ RTC_ISR2_WUTF_bp,		2
.equ RTC_ISR2_TAMP1F_bp,	5
.equ RTC_ISR2_TAMP2F_bp,	6
.equ RTC_ISR2_TAMP3F_bp,	7

;RTC_ISR1
.equ RTC_ISR1_ALRAWF_bp,	0
.equ RTC_ISR1_RECALPF_bp,	1
.equ RTC_ISR1_WUTWF_bp,		2
.equ RTC_ISR1_SHPF_bp,		3
.equ RTC_ISR1_INITS_bp,		4
.equ RTC_ISR1_RSF_bp,		5
.equ RTC_ISR1_INITF_bp,		6
.equ RTC_ISR1_INIT_bp,		7

;CLK_ECKCR
.equ CLK_ECKCR_HSEON_bp,	0
.equ CLK_ECKCR_HSERDY_bp,	1
.equ CLK_ECKCR_LSEON_bp,	2
.equ CLK_ECKCR_LSERDY_bp,	3
.equ CLK_ECKCR_HSEBYP_bp,	4
.equ CLK_ECKCR_LSEBYP_bp,	5

;RST_SR
.equ RST_SR_PORF_bp,		0
.equ RST_SR_IWDGF_bp,		1
.equ RST_SR_ILLOPF_bp,		2
.equ RST_SR_SWIMF_bp,		3
.equ RST_SR_WWDGF_bp,		4
.equ RST_SR_BORF_bp,		5

;PWR_CSR1
.equ PWR_CSR1_PVDE_bp,		0
.equ PWR_CSR1_PLS_0,		1
.equ PWR_CSR1_PLS_0,		2
.equ PWR_CSR1_PLS_0,		3
.equ PWR_CSR1_PVDIEN_bp,	4
.equ PWR_CSR1_PVDIF_bp,		5
.equ PWR_CSR1_PVDOF_bp,		6

.equ PWR_CSR1_PLS_1V85_gc,	0x00
.equ PWR_CSR1_PLS_2V05_gc,	0x02
.equ PWR_CSR1_PLS_2V26_gc,	0x04
.equ PWR_CSR1_PLS_2V45_gc,	0x06
.equ PWR_CSR1_PLS_2V65_gc,	0x08
.equ PWR_CSR1_PLS_2V85_gc,	0x0A
.equ PWR_CSR1_PLS_3V05_gc,	0x0C
.equ PWR_CSR1_PLS_IN_gc,	0x0E

.equ PWR_CSR1_PLS_gm,		0x0E

;TIM_DER
.equ TIM_DER_UDE_bp,		0
.equ TIM_DER_CC1DE_bp,		1
.equ TIM_DER_CC2DE_bp,		2
.equ TIM_DER_CC3DE_bp,		3
.equ TIM_DER_CC4DE_bp,		4
.equ TIM_DER_COMDE_bp,		5

;-------------------------------------------------------------------------------
; Fin
