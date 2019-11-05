/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 3.01.75 */
/* at Fri Nov 14 05:07:21 1997
 */
/* Compiler settings for mtxadmin.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: none
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

const IID IID_ICatalog = {0x6eb22870,0x8a19,0x11d0,{0x81,0xb6,0x00,0xa0,0xc9,0x23,0x1c,0x29}};

// These IID's are included by linking to uuid.lib
//const IID IID_ICatalogObject = {0x6eb22871,0x8a19,0x11d0,{0x81,0xb6,0x00,0xa0,0xc9,0x23,0x1c,0x29}};

// These IID's are included by linking to uuid.lib
//const IID IID_ICatalogCollection = {0x6eb22872,0x8a19,0x11d0,{0x81,0xb6,0x00,0xa0,0xc9,0x23,0x1c,0x29}};

const IID IID_IComponentUtil = {0x6eb22873,0x8a19,0x11d0,{0x81,0xb6,0x00,0xa0,0xc9,0x23,0x1c,0x29}};


const IID IID_IPackageUtil = {0x6eb22874,0x8a19,0x11d0,{0x81,0xb6,0x00,0xa0,0xc9,0x23,0x1c,0x29}};


const IID IID_IRemoteComponentUtil = {0x6eb22875,0x8a19,0x11d0,{0x81,0xb6,0x00,0xa0,0xc9,0x23,0x1c,0x29}};


const IID IID_IRoleAssociationUtil = {0x6eb22876,0x8a19,0x11d0,{0x81,0xb6,0x00,0xa0,0xc9,0x23,0x1c,0x29}};


const IID LIBID_MTSAdmin = {0x6eb22880,0x8a19,0x11d0,{0x81,0xb6,0x00,0xa0,0xc9,0x23,0x1c,0x29}};


const CLSID CLSID_Catalog = {0x6eb22881,0x8a19,0x11d0,{0x81,0xb6,0x00,0xa0,0xc9,0x23,0x1c,0x29}};


const CLSID CLSID_CatalogObject = {0x6eb22882,0x8a19,0x11d0,{0x81,0xb6,0x00,0xa0,0xc9,0x23,0x1c,0x29}};


const CLSID CLSID_CatalogCollection = {0x6eb22883,0x8a19,0x11d0,{0x81,0xb6,0x00,0xa0,0xc9,0x23,0x1c,0x29}};


const CLSID CLSID_ComponentUtil = {0x6eb22884,0x8a19,0x11d0,{0x81,0xb6,0x00,0xa0,0xc9,0x23,0x1c,0x29}};


const CLSID CLSID_PackageUtil = {0x6eb22885,0x8a19,0x11d0,{0x81,0xb6,0x00,0xa0,0xc9,0x23,0x1c,0x29}};


const CLSID CLSID_RemoteComponentUtil = {0x6eb22886,0x8a19,0x11d0,{0x81,0xb6,0x00,0xa0,0xc9,0x23,0x1c,0x29}};


const CLSID CLSID_RoleAssociationUtil = {0x6eb22887,0x8a19,0x11d0,{0x81,0xb6,0x00,0xa0,0xc9,0x23,0x1c,0x29}};


#ifdef __cplusplus
}
#endif


