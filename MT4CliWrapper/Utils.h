#include "Stdafx.h"
#include "MT4ManagerAPI.h"

String^ GetErrMsg(int errCode)
{
	String^ errMsg;
	switch (errCode)
	{
	case RET_OK:
		errMsg = "��ȷ";
		break;
	case RET_OK_NONE:
		errMsg = "��ȷ���޲���";
		break;
	case RET_ERROR:
		errMsg = "�������";
		break;
	case RET_INVALID_DATA:
		errMsg = "������Ч";
		break;
	case RET_TECH_PROBLEM:
		errMsg = "������������������";
		break;
		//		case RET_OLD_VERSION:
		//			errMsg = L"�ͻ��˰汾����";
		//			break;
		//		case RET_NO_CONNECT:
		//			errMsg = L"������";
		//			break;
		//		case RET_NOT_ENOUGH_RIGHTS:
		//			errMsg = L"������Ȩ��";
		//			break;
	case RET_TOO_FREQUENT:
		errMsg = "���ʹ���Ƶ��";
		break;
	case RET_MALFUNCTION:
		errMsg = "�Ƿ�����";
		break;
		//		case RET_GENERATE_KEY :
		//			errMsg = L"��Ҫ���͹�Կ��Ϣ";
		//			break;
		//		case RET_SECURITY_SESSION:
		//			errMsg = L"��ȫ�Ự����";
		//			break;
	case RET_ACCOUNT_DISABLED:
		errMsg = "�˻��ѱ����";
		break;
	case RET_BAD_ACCOUNT_INFO:
		errMsg = "�˻���Ϣ����";
		break;
		//		case RET_PUBLIC_KEY_MISSING:
		//			errMsg = L"��Կ��Ϣȱʧ";
		//			break;
	case RET_TRADE_TIMEOUT:
		errMsg = "���׳�ʱ";
		break;
	case RET_TRADE_BAD_PRICES:
		errMsg = "��Ч���µ��۸�";
		break;
	case RET_TRADE_BAD_STOPS:
		errMsg = "��Ч��ֹ��ֹӯ";
		break;
	case RET_TRADE_BAD_VOLUME:
		errMsg = "��Ч���µ���";
		break;
	case RET_TRADE_MARKET_CLOSED:
		errMsg = "�г��ѹر�";
		break;
	case RET_TRADE_DISABLE:
		errMsg = "��ֹ����";
		break;
	case RET_TRADE_NO_MONEY:
		errMsg = "�ʽ���";
		break;
	case RET_TRADE_PRICE_CHANGED:
		errMsg = "�۸��Ѿ��仯";
		break;
		//		case RET_TRADE_OFFQUOTES:
		//			errMsg = L"û�б�����Ϣ";
		//			break;
	case RET_TRADE_BROKER_BUSY:
		errMsg = "�����̷�æ";
		break;
		//		case RET_TRADE_REQUOTE:
		//			errMsg = L"����Ҫ��";
		//			break;
	case RET_TRADE_ORDER_LOCKED:
		errMsg = "�����ѱ��������޷��޸�";
		break;
	case RET_TRADE_LONG_ONLY:
		errMsg = "��������";
		break;
	case RET_TRADE_TOO_MANY_REQ:
		errMsg = "ͬһ�ͻ��������������";
		break;
	case RET_TRADE_ACCEPTED:
		errMsg = "���������ѱ�����";
		break;
	case RET_TRADE_PROCESS:
		errMsg = "�����������ڴ�����";
		break;
	case RET_TRADE_USER_CANCEL:
		errMsg = "�������󱻿ͻ�ȡ��";
		break;
	case RET_TRADE_MODIFY_DENIED:
		errMsg = "�޷��޸Ķ���";
		break;
		//		case RET_TRADE_CONTEXT_BUSY:
		//			errMsg = L"���������ķ�æ";
		//			break;
	case RET_TRADE_EXPIRATION_DENIED:
		errMsg = "����ʹ�ö�����Ч����";
		break;
	case RET_TRADE_TOO_MANY_ORDERS:
		errMsg = "������������";
		break;
	case RET_TRADE_HEDGE_PROHIBITED:
		errMsg = "��ֹ�Գ彻�ײ���";
		break;
	case RET_TRADE_PROHIBITED_BY_FIFO:
		errMsg = "����FIFO�����޷����н���";
		break;
	default:
		errMsg = "��������������";
		break;
	}
	return errMsg;
}