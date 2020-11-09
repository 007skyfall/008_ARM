#ifndef __MAIN_H
#define __MAIN_H
/*************************************
文件名	: 	 main.h
版本	   : V1.0
描述	   : 时钟GPIO5_IO03相关寄存器地址定义。
*************************************/

/* 
 * CCM相关寄存器地址 
 */
#define CCM_CCGR0 			*((volatile unsigned int *)0X020C4068)
#define CCM_CCGR1 			*((volatile unsigned int *)0X020C406C)

#define CCM_CCGR2 			*((volatile unsigned int *)0X020C4070)
#define CCM_CCGR3 			*((volatile unsigned int *)0X020C4074)
#define CCM_CCGR4 			*((volatile unsigned int *)0X020C4078)
#define CCM_CCGR5 			*((volatile unsigned int *)0X020C407C)
#define CCM_CCGR6 			*((volatile unsigned int *)0X020C4080)

/* 
 * IOMUX相关寄存器地址 
 */
#define SW_MUX_GPIO5_IO03 	*((volatile unsigned int *)0X020E0028)
#define SW_PAD_GPIO5_IO03 	*((volatile unsigned int *)0X020E02B4)

/* 
 * GPIO5相关寄存器地址 
 */
#define GPIO5_DR 			*((volatile unsigned int *)0X020AC000)
#define GPIO5_GDIR 			*((volatile unsigned int *)0X020AC004)
#define GPIO5_PSR 			*((volatile unsigned int *)0X020AC008)
#define GPIO5_ICR1 			*((volatile unsigned int *)0X020AC00C)
#define GPIO5_ICR2 			*((volatile unsigned int *)0X020AC010)
#define GPIO5_IMR 			*((volatile unsigned int *)0X020AC014)
#define GPIO5_ISR 			*((volatile unsigned int *)0X020AC018)
#define GPIO5_EDGE_SEL 		*((volatile unsigned int *)0X020AC01C)

#endif
