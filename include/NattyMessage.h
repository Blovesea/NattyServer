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

#define NATTY_RESULT_CODE_SUCCESS 					"200"		//Success
#define NATTY_RESULT_CODE_BUSY						"500"		//��������æ
#define NATTY_RESULT_CODE_ERR_DB_EXCEPTION			"501"		//���ݿ�����쳣


#define NATTY_RESULT_CODE_ERR_DEVICE_NOTONLINE 		"10001"		//�豸������
#define NATTY_RESULT_CODE_ERR_JSON_FORMAT 			"10002"		//JSOn��ʽ����
#define NATTY_RESULT_CODE_ERR_JSON_CONVERT			"10003"		//JSONת������
#define NATTY_RESULT_CODE_ERR_JSON_DATA				"10004"		//JSONת���ݴ���
#define NATTY_RESULT_CODE_ERR_ICCID_NOTPHONENUM		"10005"		//JSONת������
#define NATTY_RESULT_CODE_ERR_DB_OPERATION			"10006"		
#define NATTY_RESULT_CODE_ERR_DB_NOEXIST			"10007"		
#define NATTY_RESULT_CODE_ERR_DB_SAVE_OFFLINE		"10008"		//�����������ݴ���

#define NATTY_RESULT_CODE_ERR_DB_SAVE_REPEATE_DATA	"10009"		//�����ظ�����
#define NATTY_RESULT_CODE_ERR_DB_SEND_OFFLINE		"10010"		//��ȡ�������ݴ���

#define NATTY_RESULT_CODE_ERR_USER_NOTONLINE		"10011"		//UserId������
#define NATTY_RESULT_CODE_ERR_BIND_REPEATE_DATA		"10012"		//UserId��DeviceId�Ѿ��󶨹�
#define NATTY_RESULT_CODE_ERR_NOACTIVATE			"10013"		//�豸û�м���
#define NATTY_RESULT_CODE_ERR_BROADCAST				"10014"		//�㲥����
#define NATTY_RESULT_CODE_ERR_EFENCE_POINTS			"10015"		//����Χ�����ݵ���δ�ں���Χ

#define NATTY_RESULT_CODE_ERR_REPEAT_CLIENTID		"10016"		//�ظ��ͻ���ID
#define NATTY_RESULT_CODE_ERR_NOT_FIND_ADMIN 		"10018"		//û���ҵ�����Ա


#if 0
const char* ntyCommonResultMessage(const char *code);
#else
void ntyCommonResultMessage(const char *code, char *message);
#endif


#endif


