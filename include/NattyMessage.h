/*
 *  Author : luopeng , email : hibroad@hotmail.com
 * 
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of Author. (C) 2017
 * 
 *
 
****       *****
  ***        *
  ***        *                         *               *
  * **       *                         *               *
  * **       *                         *               *
  *  **      *                        **              **
  *  **      *                       ***             ***
  *   **     *       ******       ***********     ***********    *****    *****
  *   **     *     **     **          **              **           **      **
  *    **    *    **       **         **              **           **      *
  *    **    *    **       **         **              **            *      *
  *     **   *    **       **         **              **            **     *
  *     **   *            ***         **              **             *    *
  *      **  *       ***** **         **              **             **   *
  *      **  *     ***     **         **              **             **   *
  *       ** *    **       **         **              **              *  *
  *       ** *   **        **         **              **              ** *
  *        ***   **        **         **              **               * *
  *        ***   **        **         **     *        **     *         **
  *         **   **        **  *      **     *        **     *         **
  *         **    **     ****  *       **   *          **   *          *
*****        *     ******   ***         ****            ****           *
                                                                       *
                                                                      *
                                                                  *****
                                                                  ****


 *
 */



#ifndef __NATTY_MESSAGE_H__
#define __NATTY_MESSAGE_H__

#include <stdio.h>

//#include "NattyUserProtocol.h"

#define NATTY_RESULT_CODE_SUCCESS 					"200"		//
#define NATTY_RESULT_CODE_ERR_DEVICE_NOTONLINE 		"10001"		//�豸������
#define NATTY_RESULT_CODE_ERR_JSON_FORMAT 			"10002"		//JSOn��ʽ����
#define NATTY_RESULT_CODE_ERR_JSON_CONVERT			"10003"		//JSONת������
#define NATTY_RESULT_CODE_ERR_JSON_DATA				"10004"		//JSONת���ݴ���
#define NATTY_RESULT_CODE_ERR_ICCID_NOTPHONENUM		"10005"		//JSONת������
#define NATTY_RESULT_CODE_ERR_DB_OPERATION			"10006"		
#define NATTY_RESULT_CODE_ERR_DB_NOEXIST			"10007"
#define NATTY_RESULT_CODE_ERR_DB_SAVE_OFFLINE		"10008"		//�����������ݴ���

#define NATTY_RESULT_CODE_ERR_DB_REPEATE_DATA		"10009"		//


const char* ntyCommonResultMessage(const char *code);


#endif


