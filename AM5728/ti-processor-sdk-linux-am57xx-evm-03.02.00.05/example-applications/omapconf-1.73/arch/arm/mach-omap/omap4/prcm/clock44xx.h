/*
 *
 * @Component			OMAPCONF
 * @Filename			clock44xx.h
 * @Description			OMAP4 PRCM Clocks Definitions & Functions
 * @Author			Patrick Titiano (p-titiano@ti.com)
 * @Date			2011
 * @Copyright			Texas Instruments Incorporated
 *
 *
 * Copyright (C) 2011 Texas Instruments Incorporated - http://www.ti.com/
 *
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */


#ifndef __PRCM_CLOCK44XX_H__
#define __PRCM_CLOCK44XX_H__


#define CLOCK44XX_MAX_NAME_LENGTH		22

typedef enum {
	OMAP4_SYS_CLK,
	OMAP4_FUNC_32K_CLK,
	OMAP4_PER_SYS_GFCLK,
	OMAP4_CUST_EFUSE_SYS_CLK,
	OMAP4_STD_EFUSE_SYS_CLK,
	OMAP4_EMU_SYS_CLK,
	OMAP4_ABE_DPLL_BYPASS_CLK,
	OMAP4_ABE_ALWON_32K_CLK,
	OMAP4_PER_32K_GFCLK,
	OMAP4_CORE_32K_GFCLK,
	OMAP4_WKUP_32K_GFCLK,
	OMAP4_ABE_LP_CLK,
	OMAP4_L4WKUP_ICLK,
	OMAP4_WKUP_L4_ICLK1,
	OMAP4_WKUP_L4_ICLK2,
	OMAP4_CM1_SYS_CLK,
	OMAP4_SR_MPU_SYS_CLK,
	OMAP4_SR_IVA_SYS_CLK,
	OMAP4_SR_CORE_SYS_CLK,
	OMAP4_ABE_DSS_SYS_CLK,
	OMAP4_DSS_ALWON_SYS_CLK,
	OMAP4_ABE_SYSCLK,
	OMAP4_DPLL_SYS_REF_CLK,
	OMAP4_CORE_DPLL_ALWON_CLK,
	OMAP4_PER_DPLL_ALWON_CLK,
	OMAP4_IVA_DPLL_ALWON_CLK,
	OMAP4_MPU_DPLL_ALWON_CLK,
	OMAP4_L3INIT_DPLL_ALWON_CLK,
	OMAP4_ABE_DPLL_ALWON_CLK,
	OMAP4_GPT1_FCLK,
	OMAP4_GPT2_FCLK,
	OMAP4_GPT3_FCLK,
	OMAP4_GPT4_FCLK,
	OMAP4_GPT9_FCLK,
	OMAP4_GPT10_FCLK,
	OMAP4_GPT11_FCLK,
	OMAP4_GPT12_FCLK,
	OMAP4_PHY_ROOT_CLK,
	OMAP4_CORE_DPLL_SCRM_CLK,
	OMAP4_DLL_X2_CLK,
	OMAP4_CORE_X2_CLK,
	OMAP4_CORE_DPLL_EMU_CLK,
	OMAP4_CORE_GFX_FCLK,
	OMAP4_96M_ALWON_FCLK,
	OMAP4_192M_FCLK,
	OMAP4_PER_DPLL_SCRM_CLK,
	OMAP4_128M_FCLK,
	OMAP4_DSS_FCLK,
	OMAP4_PER_MPU_M3_CLK,
	OMAP4_PER_DPLL_EMU_CLK,
	OMAP4_PER_ABE_X1_FCLK,
	OMAP4_DPLL_ABE_X2_FCLK,
	OMAP4_CORE_DPLL_HS_CLK,
	OMAP4_MPU_DPLL_CLK,
	OMAP4_DSP_ROOT_CLK,
	OMAP4_IVAHD_ROOT_CLK,
	OMAP4_INIT_480M_FCLK,
	OMAP4_INIT_960M_FCLK,
	OMAP4_CLK_DCO_LDO,
	OMAP4_UNIPRO1_PHY_FCLK,
	OMAP4_DLL_CLK,
	OMAP4_CORE_CLK,
	OMAP4_CORE_MPU_M3_CLK,
	OMAP4_L3_ICLK,
	OMAP4_L4_ROOT_CLK,
	OMAP4_L4_ICLK,
	OMAP4_MPU_DPLL_HS_CLK,
	OMAP4_IVA_DPLL_HS_CLK,
	OMAP4_IVA_HSD_BYP_CLK,
	OMAP4_CORE_PHY_HSD_BYP_CLK,
	OMAP4_USB_DPLL_HS_CLK,
	OMAP4_PER_DPLL_HS_CLK,
	OMAP4_PER_HSD_BYP_CLK,
	OMAP4_24M_FCLK,
	OMAP4_HSIC_P2_480M_FCLK,
	OMAP4_HSIC_P1_480M_FCLK,
	OMAP4_INIT_60M_FCLK,
	OMAP4_TLL_CH2_FCLK,
	OMAP4_TLL_CH1_FCLK,
	OMAP4_TLL_CH0_FCLK,
	OMAP4_UTMI_ROOT_FCLK,
	OMAP4_INIT_60M_P2_FCLK,
	OMAP4_INIT_60M_P1_FCLK,
	OMAP4_HSIC_P1_FCLK,
	OMAP4_HSIC_P2_FCLK,
	OMAP4_XCLK_60M_OTG,
	OMAP4_XCLK_60M_HSP2,
	OMAP4_XCLK_60M_HSP1,
	OMAP4_UTMI_P1_FCLK,
	OMAP4_UTMI_P2_FCLK,
	OMAP4_OTG_60M_FCLK,
	OMAP4_PHY_CLKOUT,
	OMAP4_PAD_UCLKS,
	OMAP4_SLIMBUS_UCLKS,
	OMAP4_ABE_CLK,
	OMAP4_AESS_FCLK,
	OMAP4_ABE_ICLK2,
	OMAP4_ABE_24M_FCLK,
	OMAP4_PAD_CLKS,
	OMAP4_SLIMBUS_CLKS,
	OMAP4_MCBSP1_INT_FCLK,
	OMAP4_MCBSP2_INT_FCLK,
	OMAP4_MCBSP3_INT_FCLK,
	OMAP4_MCASP1_INT_FCLK,
	OMAP4_DMIC_ABE_INT_FCLK,
	OMAP4_MCBSP1_FCLK,
	OMAP4_MCBSP2_FCLK,
	OMAP4_MCBSP3_FCLK,
	OMAP4_MCASP1_FCLK,
	OMAP4_DMIC_ABE_FCLK,
	OMAP4_ABE_GPT5_FCLK,
	OMAP4_ABE_GPT6_FCLK,
	OMAP4_ABE_GPT7_FCLK,
	OMAP4_ABE_GPT8_FCLK,
	OMAP4_GFX_L3_ICLK,
	OMAP4_INSTR_L3_ICLK,
	OMAP4_DMA_L3_ICLK,
	OMAP4_DSS_L3_ICLK,
	OMAP4_EMIF_L3_ICLK,
	OMAP4_INIT_L3_ICLK,
	OMAP4_L3_ICLK1,
	OMAP4_L3_ICLK2,
	OMAP4_C2C_L3_ICLK,
	OMAP4_CFG_L4_ICLK,
	OMAP4_INSTR_L4_ICLK,
	OMAP4_DMA_L4_ICLK,
	OMAP4_DSS_L4_ICLK,
	OMAP4_AO_L4_ICLK,
	OMAP4_EMIF_L4_ICLK,
	OMAP4_C2C_L4_ICLK,
	OMAP4_INIT_L4_ICLK,
	OMAP4_L4_ICLK2,
	OMAP4_L4_ICLK1,
	OMAP4_PER_L4_ICLK,
	OMAP4_MPU_M3_ISS_CLK,
	OMAP4_ISS_CLK,
	OMAP4_MPU_M3_CLK,
	OMAP4_64M_FCLK,
	OMAP4_FDIF_FCLK,
	OMAP4_PER_ABE_NC_FCLK,
	OMAP4_PER_ABE_24M_FCLK,
	OMAP4_96M_FCLK,
	OMAP4_PER_48M_FCLK,
	OMAP4_48M_FCLK,
	OMAP4_INIT_48M_FCLK,
	OMAP4_48MC_FCLK,
	OMAP4_24MC_FCLK,
	OMAP4_PER_24MC_FCLK,
	OMAP4_12M_FCLK,
	OMAP4_HSI_FCLK,
	OMAP4_INIT_HSI_FCLK,
	OMAP4_PER_GFX_FCLK,
	OMAP4_HSMMC1_FCLK,
	OMAP4_MMC1_FCLK,
	OMAP4_HSMMC2_FCLK,
	OMAP4_MMC2_FCLK,
	OMAP4_PER_MCBSP4_FCLK,
	OMAP4_PER_MCBSP4_INT_FCLK,
	OMAP4_HDMI_PHY_48M_FCLK,
	OMAP4_INIT_48MC_FCLK,
	OMAP4_GFX_FCLK,
	OMAP4_C2C_L3X2_ICLK,
	OMAP4_PER_96M_FCLK,
	OMAP4_USIM_FCLK,
	OMAP4_SECURE_32K_CLK,
	OMAP4_L3_SECURE_GICLK,
	OMAP4_L4_SECURE_GICLK,
	OMAP4_L3_INSTR_GICLK,
	OMAP4_SLIMBUS_CORE_UCLKS,
	OMAP4_CORE_BB2D_FCLK,
	OMAP4_PER_BB2D_FCLK,
	OMAP4_BB2D_FCLK,
	OMAP4_UNDEF_CLK,
	OMAP4_CLOCK_ID_MAX
} clock44xx_id;

double clk44xx_get_system_clock_speed(void);
char *clk44xx_get_name(clock44xx_id id, char name[CLOCK44XX_MAX_NAME_LENGTH]);
double clk44xx_get_clock_speed(clock44xx_id clk,
	unsigned short ignore_stop_status);


#endif
