/* SoC level DTS fixup file */

#define DT_ADC_0_BASE_ADDRESS		DT_NXP_KINETIS_ADC16_4003B000_BASE_ADDRESS
#define DT_ADC_0_IRQ			DT_NXP_KINETIS_ADC16_4003B000_IRQ_0
#define CONFIG_ADC_0_IRQ_PRI			DT_NXP_KINETIS_ADC16_4003B000_IRQ_0_PRIORITY
#define CONFIG_ADC_0_NAME			DT_NXP_KINETIS_ADC16_4003B000_LABEL

#define CONFIG_I2C_0_NAME			DT_NXP_KINETIS_I2C_40066000_LABEL
#define DT_I2C_MCUX_0_BASE_ADDRESS		DT_NXP_KINETIS_I2C_40066000_BASE_ADDRESS
#define DT_I2C_MCUX_0_IRQ			DT_NXP_KINETIS_I2C_40066000_IRQ_0
#define DT_I2C_MCUX_0_IRQ_PRI		DT_NXP_KINETIS_I2C_40066000_IRQ_0_PRIORITY
#define DT_I2C_MCUX_0_BITRATE		DT_NXP_KINETIS_I2C_40066000_CLOCK_FREQUENCY

#define CONFIG_I2C_1_NAME			DT_NXP_KINETIS_I2C_40067000_LABEL
#define DT_I2C_MCUX_1_BASE_ADDRESS		DT_NXP_KINETIS_I2C_40067000_BASE_ADDRESS
#define DT_I2C_MCUX_1_IRQ			DT_NXP_KINETIS_I2C_40067000_IRQ_0
#define DT_I2C_MCUX_1_IRQ_PRI		DT_NXP_KINETIS_I2C_40067000_IRQ_0_PRIORITY
#define DT_I2C_MCUX_1_BITRATE		DT_NXP_KINETIS_I2C_40067000_CLOCK_FREQUENCY

#define DT_FTM_1_BASE_ADDRESS		DT_NXP_KINETIS_FTM_40039000_BASE_ADDRESS
#define DT_FTM_1_IRQ			DT_NXP_KINETIS_FTM_40039000_IRQ_0
#define DT_FTM_1_IRQ_PRI			DT_NXP_KINETIS_FTM_40039000_IRQ_0_PRIORITY
#define DT_FTM_1_NAME			DT_NXP_KINETIS_FTM_40039000_LABEL

#define DT_SIM_BASE_ADDRESS			DT_NXP_KINETIS_SIM_40047000_BASE_ADDRESS
#define DT_SIM_NAME				DT_NXP_KINETIS_SIM_40047000_LABEL

#define DT_RTC_MCUX_0_BASE_ADDRESS		DT_NXP_KINETIS_RTC_4003D000_BASE_ADDRESS
#define DT_RTC_MCUX_0_IRQ_PRI		DT_NXP_KINETIS_RTC_4003D000_IRQ_0_PRIORITY
#define DT_RTC_MCUX_0_IRQ			DT_NXP_KINETIS_RTC_4003D000_IRQ_0
#define DT_RTC_MCUX_0_NAME			DT_NXP_KINETIS_RTC_4003D000_LABEL
#define CONFIG_RTC_PRESCALER			DT_NXP_KINETIS_RTC_4003D000_PRESCALER
#define CONFIG_RTC_0_NAME			DT_NXP_KINETIS_RTC_4003D000_LABEL

#if defined(CONFIG_SOC_MKW22D5) || defined(CONFIG_SOC_MKW24D5)
#define DT_NUM_IRQ_PRIO_BITS		DT_ARM_V7M_NVIC_E000E100_ARM_NUM_IRQ_PRIORITY_BITS

#define DT_UART_MCUX_0_BAUD_RATE		DT_NXP_KINETIS_UART_4006A000_CURRENT_SPEED
#define DT_UART_MCUX_0_NAME			DT_NXP_KINETIS_UART_4006A000_LABEL
#define DT_UART_MCUX_0_IRQ_ERROR		DT_NXP_KINETIS_UART_4006A000_IRQ_ERROR
#define DT_UART_MCUX_0_IRQ_ERROR_PRI	DT_NXP_KINETIS_UART_4006A000_IRQ_ERROR_PRIORITY
#define DT_UART_MCUX_0_IRQ_STATUS		DT_NXP_KINETIS_UART_4006A000_IRQ_STATUS
#define DT_UART_MCUX_0_IRQ_STATUS_PRI	DT_NXP_KINETIS_UART_4006A000_IRQ_STATUS_PRIORITY
#define DT_UART_MCUX_0_CLOCK_NAME		DT_NXP_KINETIS_UART_4006A000_CLOCK_CONTROLLER
#define DT_UART_MCUX_0_CLOCK_SUBSYS		DT_NXP_KINETIS_UART_4006A000_CLOCK_NAME

#define DT_UART_MCUX_1_BAUD_RATE		DT_NXP_KINETIS_UART_4006B000_CURRENT_SPEED
#define DT_UART_MCUX_1_NAME			DT_NXP_KINETIS_UART_4006B000_LABEL
#define DT_UART_MCUX_1_IRQ_ERROR		DT_NXP_KINETIS_UART_4006B000_IRQ_ERROR
#define DT_UART_MCUX_1_IRQ_ERROR_PRI	DT_NXP_KINETIS_UART_4006B000_IRQ_ERROR_PRIORITY
#define DT_UART_MCUX_1_IRQ_STATUS		DT_NXP_KINETIS_UART_4006B000_IRQ_STATUS
#define DT_UART_MCUX_1_IRQ_STATUS_PRI	DT_NXP_KINETIS_UART_4006B000_IRQ_STATUS_PRIORITY
#define DT_UART_MCUX_1_CLOCK_NAME		DT_NXP_KINETIS_UART_4006B000_CLOCK_CONTROLLER
#define DT_UART_MCUX_1_CLOCK_SUBSYS		DT_NXP_KINETIS_UART_4006B000_CLOCK_NAME

#define DT_UART_MCUX_2_BAUD_RATE		DT_NXP_KINETIS_UART_4006C000_CURRENT_SPEED
#define DT_UART_MCUX_2_NAME			DT_NXP_KINETIS_UART_4006C000_LABEL
#define DT_UART_MCUX_2_IRQ_ERROR		DT_NXP_KINETIS_UART_4006C000_IRQ_ERROR
#define DT_UART_MCUX_2_IRQ_ERROR_PRI	DT_NXP_KINETIS_UART_4006C000_IRQ_ERROR_PRIORITY
#define DT_UART_MCUX_2_IRQ_STATUS		DT_NXP_KINETIS_UART_4006C000_IRQ_STATUS
#define DT_UART_MCUX_2_IRQ_STATUS_PRI	DT_NXP_KINETIS_UART_4006C000_IRQ_STATUS_PRIORITY
#define DT_UART_MCUX_2_CLOCK_NAME		DT_NXP_KINETIS_UART_4006C000_CLOCK_CONTROLLER
#define DT_UART_MCUX_2_CLOCK_SUBSYS		DT_NXP_KINETIS_UART_4006C000_CLOCK_NAME

#define DT_UART_MCUX_3_BAUD_RATE		DT_NXP_KINETIS_UART_4006D000_CURRENT_SPEED
#define DT_UART_MCUX_3_NAME			DT_NXP_KINETIS_UART_4006D000_LABEL
#define DT_UART_MCUX_3_IRQ_ERROR		DT_NXP_KINETIS_UART_4006D000_IRQ_ERROR
#define DT_UART_MCUX_3_IRQ_ERROR_PRI	DT_NXP_KINETIS_UART_4006D000_IRQ_ERROR_PRIORITY
#define DT_UART_MCUX_3_IRQ_STATUS		DT_NXP_KINETIS_UART_4006D000_IRQ_STATUS
#define DT_UART_MCUX_3_IRQ_STATUS_PRI	DT_NXP_KINETIS_UART_4006D000_IRQ_STATUS_PRIORITY
#define DT_UART_MCUX_3_CLOCK_NAME		DT_NXP_KINETIS_UART_4006D000_CLOCK_CONTROLLER
#define DT_UART_MCUX_3_CLOCK_SUBSYS		DT_NXP_KINETIS_UART_4006D000_CLOCK_NAME

#define DT_FLASH_DEV_BASE_ADDRESS		DT_NXP_KINETIS_FTFL_40020000_BASE_ADDRESS
#define DT_FLASH_DEV_NAME			DT_NXP_KINETIS_FTFL_40020000_LABEL

#define CONFIG_WDT_0_NAME			DT_NXP_KINETIS_WDOG_40052000_LABEL
#define DT_WDT_0_BASE_ADDRESS		DT_NXP_KINETIS_WDOG_40052000_BASE_ADDRESS
#define DT_WDT_0_IRQ			DT_NXP_KINETIS_WDOG_40052000_IRQ_0
#define DT_WDT_0_IRQ_PRI			DT_NXP_KINETIS_WDOG_40052000_IRQ_0_PRIORITY
#define DT_WDT_0_CLOCK_NAME			DT_NXP_KINETIS_WDOG_40052000_CLOCK_CONTROLLER
#define DT_WDT_0_CLOCK_SUBSYS		DT_NXP_KINETIS_WDOG_40052000_CLOCK_NAME

#define CONFIG_SPI_0_NAME			DT_NXP_KINETIS_DSPI_4002C000_LABEL
#define DT_SPI_0_BASE_ADDRESS		DT_NXP_KINETIS_DSPI_4002C000_BASE_ADDRESS
#define DT_SPI_0_IRQ			DT_NXP_KINETIS_DSPI_4002C000_IRQ_0
#define CONFIG_SPI_0_IRQ_PRI			DT_NXP_KINETIS_DSPI_4002C000_IRQ_0_PRIORITY
#define DT_SPI_0_CLOCK_NAME			DT_NXP_KINETIS_DSPI_4002C000_CLOCK_CONTROLLER
#define DT_SPI_0_CLOCK_SUBSYS		DT_NXP_KINETIS_DSPI_4002C000_CLOCK_NAME

#define CONFIG_SPI_1_NAME			DT_NXP_KINETIS_DSPI_4002D000_LABEL
#define DT_SPI_1_BASE_ADDRESS		DT_NXP_KINETIS_DSPI_4002D000_BASE_ADDRESS
#define DT_SPI_1_IRQ			DT_NXP_KINETIS_DSPI_4002D000_IRQ_0
#define CONFIG_SPI_1_IRQ_PRI			DT_NXP_KINETIS_DSPI_4002D000_IRQ_0_PRIORITY
#define DT_SPI_1_CLOCK_NAME			DT_NXP_KINETIS_DSPI_4002D000_CLOCK_CONTROLLER
#define DT_SPI_1_CLOCK_SUBSYS		DT_NXP_KINETIS_DSPI_4002D000_CLOCK_NAME

#define CONFIG_IEEE802154_MCR20A_SPI_DRV_NAME		DT_NXP_KINETIS_DSPI_4002D000_NXP_MCR20A_0_BUS_NAME
#define CONFIG_IEEE802154_MCR20A_SPI_SLAVE		DT_NXP_KINETIS_DSPI_4002D000_NXP_MCR20A_0_BASE_ADDRESS
#define CONFIG_IEEE802154_MCR20A_SPI_FREQ		DT_NXP_KINETIS_DSPI_4002D000_NXP_MCR20A_0_SPI_MAX_FREQUENCY
#define CONFIG_IEEE802154_MCR20A_GPIO_SPI_CS_DRV_NAME	DT_NXP_KINETIS_DSPI_4002D000_CS_GPIOS_CONTROLLER
#define CONFIG_IEEE802154_MCR20A_GPIO_SPI_CS_PIN	DT_NXP_KINETIS_DSPI_4002D000_CS_GPIOS_PIN
#define CONFIG_MCR20A_GPIO_IRQ_B_NAME			DT_NXP_KINETIS_DSPI_4002D000_NXP_MCR20A_0_IRQB_GPIOS_CONTROLLER
#define CONFIG_MCR20A_GPIO_IRQ_B_PIN			DT_NXP_KINETIS_DSPI_4002D000_NXP_MCR20A_0_IRQB_GPIOS_PIN
#define CONFIG_MCR20A_GPIO_RESET_NAME			DT_NXP_KINETIS_DSPI_4002D000_NXP_MCR20A_0_RESET_GPIOS_CONTROLLER
#define CONFIG_MCR20A_GPIO_RESET_PIN			DT_NXP_KINETIS_DSPI_4002D000_NXP_MCR20A_0_RESET_GPIOS_PIN

#define DT_USBD_KINETIS_NAME		DT_NXP_KINETIS_USBD_40072000_LABEL
#define DT_USBD_KINETIS_IRQ			DT_NXP_KINETIS_USBD_40072000_IRQ_USB_OTG
#define DT_USBD_KINETIS_IRQ_PRI		DT_NXP_KINETIS_USBD_40072000_IRQ_USB_OTG_PRIORITY
#define DT_USBD_KINETIS_BASE_ADDRESS	DT_NXP_KINETIS_USBD_40072000_BASE_ADDRESS
#define DT_USBD_KINETIS_NUM_BIDIR_EP	DT_NXP_KINETIS_USBD_40072000_NUM_BIDIR_ENDPOINTS

#define DT_ENTROPY_MCUX_RNGA_BASE_ADDRESS	DT_NXP_KINETIS_RNGA_40029000_BASE_ADDRESS
#define DT_ENTROPY_MCUX_RNGA_IRQ		DT_NXP_KINETIS_RNGA_40029000_IRQ_0
#define DT_ENTROPY_MCUX_RNGA_IRQ_PRI	DT_NXP_KINETIS_RNGA_40029000_IRQ_0_PRIORITY
#define DT_ENTROPY_MCUX_RNGA_NAME		DT_NXP_KINETIS_RNGA_40029000_LABEL
#define CONFIG_ENTROPY_NAME			DT_NXP_KINETIS_RNGA_40029000_LABEL
#endif /* CONFIG_SOC_MKW22D5 || CONFIG_SOC_MKW24D5 */

#if defined(CONFIG_SOC_MKW40Z4) || defined(CONFIG_SOC_MKW41Z4)
#define DT_NUM_IRQ_PRIO_BITS		DT_ARM_V6M_NVIC_E000E100_ARM_NUM_IRQ_PRIORITY_BITS

#define DT_UART_MCUX_LPUART_0_BAUD_RATE	DT_NXP_KINETIS_LPUART_40054000_CURRENT_SPEED
#define DT_UART_MCUX_LPUART_0_IRQ		DT_NXP_KINETIS_LPUART_40054000_IRQ_0
#define DT_UART_MCUX_LPUART_0_IRQ_PRI	DT_NXP_KINETIS_LPUART_40054000_IRQ_0_PRIORITY
#define DT_UART_MCUX_LPUART_0_NAME		DT_NXP_KINETIS_LPUART_40054000_LABEL
#define DT_UART_MCUX_LPUART_0_CLOCK_NAME	DT_NXP_KINETIS_LPUART_40054000_CLOCK_CONTROLLER
#define DT_UART_MCUX_LPUART_0_CLOCK_SUBSYS	DT_NXP_KINETIS_LPUART_40054000_CLOCK_NAME

#define DT_FLASH_DEV_BASE_ADDRESS		DT_NXP_KINETIS_FTFA_40020000_BASE_ADDRESS
#define DT_FLASH_DEV_NAME			DT_NXP_KINETIS_FTFA_40020000_LABEL

#define CONFIG_SPI_0_NAME			DT_NXP_KINETIS_DSPI_4002C000_LABEL
#define DT_SPI_0_BASE_ADDRESS		DT_NXP_KINETIS_DSPI_4002C000_BASE_ADDRESS
#define DT_SPI_0_IRQ			DT_NXP_KINETIS_DSPI_4002C000_IRQ_0
#define CONFIG_SPI_0_IRQ_PRI			DT_NXP_KINETIS_DSPI_4002C000_IRQ_0_PRIORITY
#define DT_SPI_0_CLOCK_NAME			DT_NXP_KINETIS_DSPI_4002C000_CLOCK_CONTROLLER
#define DT_SPI_0_CLOCK_SUBSYS		DT_NXP_KINETIS_DSPI_4002C000_CLOCK_NAME

#define CONFIG_SPI_1_NAME			DT_NXP_KINETIS_DSPI_4002D000_LABEL
#define DT_SPI_1_BASE_ADDRESS		DT_NXP_KINETIS_DSPI_4002D000_BASE_ADDRESS
#define DT_SPI_1_IRQ			DT_NXP_KINETIS_DSPI_4002D000_IRQ_0
#define CONFIG_SPI_1_IRQ_PRI			DT_NXP_KINETIS_DSPI_4002D000_IRQ_0_PRIORITY
#define DT_SPI_1_CLOCK_NAME			DT_NXP_KINETIS_DSPI_4002D000_CLOCK_CONTROLLER
#define DT_SPI_1_CLOCK_SUBSYS		DT_NXP_KINETIS_DSPI_4002D000_CLOCK_NAME

#define DT_ENTROPY_MCUX_TRNG_BASE_ADDRESS	DT_NXP_KINETIS_TRNG_40029000_BASE_ADDRESS
#define DT_ENTROPY_MCUX_TRNG_IRQ		DT_NXP_KINETIS_TRNG_40029000_IRQ_0
#define DT_ENTROPY_MCUX_TRNG_IRQ_PRI	DT_NXP_KINETIS_TRNG_40029000_IRQ_0_PRIORITY
#define DT_ENTROPY_MCUX_TRNG_NAME		DT_NXP_KINETIS_TRNG_40029000_LABEL
#define CONFIG_ENTROPY_NAME			DT_NXP_KINETIS_TRNG_40029000_LABEL

#endif /* CONFIG_SOC_MKW40Z4 || CONFIG_SOC_MKW41Z4 */
/* End of SoC Level DTS fixup file */
