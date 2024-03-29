﻿#ifndef KissDicomViewConfig
#define KissDicomViewConfig

// 软件版本
#define Project_NAME " 泛影阅片"
#define Project_VER "0.0.0.0"

//软件信息
#define Project_OrganizationName "zzu"
#define Project_OrganizationDomain "https://codechina.csdn.net/a15005784320/kiss-dicom-viewer"

// 默认路径 && 文件
#define OPEN_DIR_PATH "/home/yxyx/Pictures/"
#define OPEN_FILE_PATH "/home/yxyx/Pictures/"
#define DICOM_SAVE_PATH "./DcmFile"
#define LOCALSETTINGS_CFG "etc/localsettings.cfg"
#define STUDY_IMPORT_FOLDER "STUDYIMPORTFOLDER"
#define STUDY_IMPORT_FILE "STUDYIMPORTFILE"

// 默认参数
#define MAGNIFIER_FACTOR "MAGNIFIERFACTOR"
#define ANNO_TEXT_FONT "ANNOTEXTFONT"
#define MAGNIFIER_SIZE 256
#define IMAGE_LABEL_SIZE 120
#define HideNmae 0
#define DICOM_DATE_FORMAT "yyyyMMdd"
#define DICOM_TIME_FORMAT "hhmmss"
#define DICOM_DATETIME_FORMAT "yyyyMMddhhmmss"
#define NORMAL_DATE_FORMAT "yyyy-MM-dd"
#define NORMAL_TIME_FORMAT "hh:mm:ss"
#define NORMAL_DATETIME_FORMAT "yyyy-MM-dd hh:mm:ss"
#define RAW_IMAGE_PREFIX "RW"
#define PRESENT_IMAGE_PREFIX "PR"
#define REPORT_PREFIX "SR"
#define DB_CONNECTION_NAME "KISS_DB"
#define DB_NAME "KISS_DB.sqlite"

// 自定义标签
#define Dcm_AF_Group        0x0021
#define DCM_AF_CursorX      DcmTagKey(Dcm_AF_Group, 0x0001)
#define DCM_AF_CursorY      DcmTagKey(Dcm_AF_Group, 0x0002)
#define DCM_AF_PixelValue   DcmTagKey(Dcm_AF_Group, 0x0003)
#define DCM_AF_ZoomFactor   DcmTagKey(Dcm_AF_Group, 0x0010)
#define DCM_AF_WindowCenter DcmTagKey(Dcm_AF_Group, 0x0020)
#define DCM_AF_WindowWidth  DcmTagKey(Dcm_AF_Group, 0x0021)

#endif // INCLUDE_GUARD
