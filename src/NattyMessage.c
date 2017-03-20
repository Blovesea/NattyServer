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


#include "NattyMessage.h"

/*
void ntyCommonResultMessage(CommonResult *pCommonResult) {
	if (pCommonResult != NULL) {
		if (pCommonResult->code != NULL) {
			if (strcmp(pCommonResult->code, NATTY_RESULT_CODE_SUCCESS) == 0) {
				pCommonResult->message = "success";
			} else if (strcmp(pCommonResult->code, NATTY_RESULT_CODE_ERR_NOEXIST) == 0) {
				pCommonResult->message = "error no exist";
			}
		}
	}
}
*/

const char* ntyCommonResultMessage(const char *code) {
	char *message = NULL;
	if (code != NULL) {
		if (strcmp(code, NATTY_RESULT_CODE_SUCCESS) == 0) {
			message = "success";			//�ɹ�
		} else if (strcmp(code, NATTY_RESULT_CODE_ERR_NOEXIST) == 0) {
			message = "Device not online";	//�豸������
		} else if (strcmp(code, NATTY_RESULT_CODE_ERR_JSON_FORMAT) == 0) {
			message = "JSON format error";	//JSON��ʽ����
		} 
	}
	return message;
}








