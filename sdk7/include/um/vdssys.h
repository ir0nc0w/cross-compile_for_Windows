

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* Compiler settings for vdssys.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __vdssys_h__
#define __vdssys_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "wtypes.h"
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vdssys_0000_0000 */
/* [local] */ 

#if (WINVER >= _WIN32_WINNT_WIN7)
#if defined(VDS_MIDL_PASS)
typedef LPWSTR PWSTR;

typedef LPCWSTR PCWSTR;

typedef DWORD ACCESS_MASK;

#pragma warning(push)
#pragma warning(disable:4001) 
#pragma once
#pragma warning(pop)
typedef PVOID PSECURITY_DESCRIPTOR;

typedef PVOID LPOVERLAPPED;

typedef ULONG *PULONG;

typedef HANDLE *PHANDLE;

#pragma once
#pragma once
#pragma once
#pragma once
#pragma warning(push)
#pragma warning(disable : 4200)
#pragma warning(disable : 4201)
typedef struct _VIRTUAL_STORAGE_TYPE
    {
    ULONG DeviceId;
    GUID VendorId;
    } 	VIRTUAL_STORAGE_TYPE;

typedef struct _VIRTUAL_STORAGE_TYPE *PVIRTUAL_STORAGE_TYPE;

typedef 
enum _CREATE_VIRTUAL_DISK_VERSION
    {	CREATE_VIRTUAL_DISK_VERSION_UNSPECIFIED	= 0,
	CREATE_VIRTUAL_DISK_VERSION_1	= 1
    } 	CREATE_VIRTUAL_DISK_VERSION;

typedef struct _CREATE_VIRTUAL_DISK_PARAMETERS
    {
    CREATE_VIRTUAL_DISK_VERSION Version;
    union 
        {
        struct 
            {
            GUID UniqueId;
            ULONGLONG MaximumSize;
            ULONG BlockSizeInBytes;
            ULONG SectorSizeInBytes;
            PCWSTR ParentPath;
            PCWSTR SourcePath;
            } 	Version1;
        } 	;
    } 	CREATE_VIRTUAL_DISK_PARAMETERS;

typedef struct _CREATE_VIRTUAL_DISK_PARAMETERS *PCREATE_VIRTUAL_DISK_PARAMETERS;

typedef 
enum _CREATE_VIRTUAL_DISK_FLAG
    {	CREATE_VIRTUAL_DISK_FLAG_NONE	= 0,
	CREATE_VIRTUAL_DISK_FLAG_FULL_PHYSICAL_ALLOCATION	= 0x1
    } 	CREATE_VIRTUAL_DISK_FLAG;

typedef 
enum _OPEN_VIRTUAL_DISK_VERSION
    {	OPEN_VIRTUAL_DISK_VERSION_UNSPECIFIED	= 0,
	OPEN_VIRTUAL_DISK_VERSION_1	= 1
    } 	OPEN_VIRTUAL_DISK_VERSION;

typedef struct _OPEN_VIRTUAL_DISK_PARAMETERS
    {
    OPEN_VIRTUAL_DISK_VERSION Version;
    union 
        {
        struct 
            {
            ULONG RWDepth;
            } 	Version1;
        } 	;
    } 	OPEN_VIRTUAL_DISK_PARAMETERS;

typedef struct _OPEN_VIRTUAL_DISK_PARAMETERS *POPEN_VIRTUAL_DISK_PARAMETERS;

typedef /* [v1_enum] */ 
enum _VIRTUAL_DISK_ACCESS_MASK
    {	VIRTUAL_DISK_ACCESS_ATTACH_RO	= 0x10000,
	VIRTUAL_DISK_ACCESS_ATTACH_RW	= 0x20000,
	VIRTUAL_DISK_ACCESS_DETACH	= 0x40000,
	VIRTUAL_DISK_ACCESS_GET_INFO	= 0x80000,
	VIRTUAL_DISK_ACCESS_CREATE	= 0x100000,
	VIRTUAL_DISK_ACCESS_METAOPS	= 0x200000,
	VIRTUAL_DISK_ACCESS_READ	= 0xd0000,
	VIRTUAL_DISK_ACCESS_ALL	= 0x3f0000,
	VIRTUAL_DISK_ACCESS_WRITABLE	= 0x320000
    } 	VIRTUAL_DISK_ACCESS_MASK;

typedef 
enum _OPEN_VIRTUAL_DISK_FLAG
    {	OPEN_VIRTUAL_DISK_FLAG_NONE	= 0,
	OPEN_VIRTUAL_DISK_FLAG_NO_PARENTS	= 0x1,
	OPEN_VIRTUAL_DISK_FLAG_BLANK_FILE	= 0x2,
	OPEN_VIRTUAL_DISK_FLAG_BOOT_DRIVE	= 0x4
    } 	OPEN_VIRTUAL_DISK_FLAG;

DWORD __stdcall OpenVirtualDisk( 
    PVIRTUAL_STORAGE_TYPE VirtualStorageType,
    PCWSTR Path,
    VIRTUAL_DISK_ACCESS_MASK VirtualDiskAccessMask,
    OPEN_VIRTUAL_DISK_FLAG Flags,
    POPEN_VIRTUAL_DISK_PARAMETERS Parameters,
    PHANDLE Handle);

DWORD __stdcall CreateVirtualDisk( 
    PVIRTUAL_STORAGE_TYPE VirtualStorageType,
    PCWSTR Path,
    VIRTUAL_DISK_ACCESS_MASK VirtualDiskAccessMask,
    PSECURITY_DESCRIPTOR SecurityDescriptor,
    CREATE_VIRTUAL_DISK_FLAG Flags,
    ULONG ProviderSpecificFlags,
    PCREATE_VIRTUAL_DISK_PARAMETERS Parameters,
    LPOVERLAPPED Overlapped,
    PHANDLE Handle);

typedef 
enum _ATTACH_VIRTUAL_DISK_VERSION
    {	ATTACH_VIRTUAL_DISK_VERSION_UNSPECIFIED	= 0,
	ATTACH_VIRTUAL_DISK_VERSION_1	= 1
    } 	ATTACH_VIRTUAL_DISK_VERSION;

typedef struct _ATTACH_VIRTUAL_DISK_PARAMETERS
    {
    ATTACH_VIRTUAL_DISK_VERSION Version;
    union 
        {
        struct 
            {
            ULONG Reserved;
            } 	Version1;
        } 	;
    } 	ATTACH_VIRTUAL_DISK_PARAMETERS;

typedef struct _ATTACH_VIRTUAL_DISK_PARAMETERS *PATTACH_VIRTUAL_DISK_PARAMETERS;

typedef 
enum _ATTACH_VIRTUAL_DISK_FLAG
    {	ATTACH_VIRTUAL_DISK_FLAG_NONE	= 0,
	ATTACH_VIRTUAL_DISK_FLAG_READ_ONLY	= 0x1,
	ATTACH_VIRTUAL_DISK_FLAG_NO_DRIVE_LETTER	= 0x2,
	ATTACH_VIRTUAL_DISK_FLAG_PERMANENT_LIFETIME	= 0x4,
	ATTACH_VIRTUAL_DISK_FLAG_NO_LOCAL_HOST	= 0x8
    } 	ATTACH_VIRTUAL_DISK_FLAG;

DWORD __stdcall AttachVirtualDisk( 
    HANDLE VirtualDiskHandle,
    PSECURITY_DESCRIPTOR SecurityDescriptor,
    ATTACH_VIRTUAL_DISK_FLAG Flags,
    ULONG ProviderSpecificFlags,
    PATTACH_VIRTUAL_DISK_PARAMETERS Parameters,
    LPOVERLAPPED Overlapped);

typedef 
enum _DETACH_VIRTUAL_DISK_FLAG
    {	DETACH_VIRTUAL_DISK_FLAG_NONE	= 0
    } 	DETACH_VIRTUAL_DISK_FLAG;

DWORD __stdcall DetachVirtualDisk( 
    HANDLE VirtualDiskHandle,
    DETACH_VIRTUAL_DISK_FLAG Flags,
    ULONG ProviderSpecificFlags);

DWORD __stdcall GetVirtualDiskPhysicalPath( 
    HANDLE VirtualDiskHandle,
    PULONG DiskPathSizeInBytes,
    PWSTR DiskPath);

typedef 
enum _DEPENDENT_DISK_FLAG
    {	DEPENDENT_DISK_FLAG_NONE	= 0,
	DEPENDENT_DISK_FLAG_MULT_BACKING_FILES	= 0x1,
	DEPENDENT_DISK_FLAG_FULLY_ALLOCATED	= 0x2,
	DEPENDENT_DISK_FLAG_READ_ONLY	= 0x4,
	DEPENDENT_DISK_FLAG_REMOTE	= 0x8,
	DEPENDENT_DISK_FLAG_SYSTEM_VOLUME	= 0x10,
	DEPENDENT_DISK_FLAG_SYSTEM_VOLUME_PARENT	= 0x20,
	DEPENDENT_DISK_FLAG_REMOVABLE	= 0x40,
	DEPENDENT_DISK_FLAG_NO_DRIVE_LETTER	= 0x80,
	DEPENDENT_DISK_FLAG_PARENT	= 0x100,
	DEPENDENT_DISK_FLAG_NO_HOST_DISK	= 0x200,
	DEPENDENT_DISK_FLAG_PERMANENT_LIFETIME	= 0x400
    } 	DEPENDENT_DISK_FLAG;

typedef 
enum _STORAGE_DEPENDENCY_INFO_VERSION
    {	STORAGE_DEPENDENCY_INFO_VERSION_UNSPECIFIED	= 0,
	STORAGE_DEPENDENCY_INFO_VERSION_1	= 1,
	STORAGE_DEPENDENCY_INFO_VERSION_2	= 2
    } 	STORAGE_DEPENDENCY_INFO_VERSION;

typedef struct _STORAGE_DEPENDENCY_INFO_TYPE_1
    {
    DEPENDENT_DISK_FLAG DependencyTypeFlags;
    ULONG ProviderSpecificFlags;
    VIRTUAL_STORAGE_TYPE VirtualStorageType;
    } 	STORAGE_DEPENDENCY_INFO_TYPE_1;

typedef struct _STORAGE_DEPENDENCY_INFO_TYPE_1 *PSTORAGE_DEPENDENCY_INFO_TYPE_1;

typedef struct _STORAGE_DEPENDENCY_INFO_TYPE_2
    {
    DEPENDENT_DISK_FLAG DependencyTypeFlags;
    ULONG ProviderSpecificFlags;
    VIRTUAL_STORAGE_TYPE VirtualStorageType;
    ULONG AncestorLevel;
    PWSTR DependencyDeviceName;
    PWSTR HostVolumeName;
    PWSTR DependentVolumeName;
    PWSTR DependentVolumeRelativePath;
    } 	STORAGE_DEPENDENCY_INFO_TYPE_2;

typedef struct _STORAGE_DEPENDENCY_INFO_TYPE_2 *PSTORAGE_DEPENDENCY_INFO_TYPE_2;

typedef struct _STORAGE_DEPENDENCY_INFO
    {
    STORAGE_DEPENDENCY_INFO_VERSION Version;
    ULONG NumberEntries;
    union 
        {
        STORAGE_DEPENDENCY_INFO_TYPE_1 Version1Entries[ 1 ];
        STORAGE_DEPENDENCY_INFO_TYPE_2 Version2Entries[ 1 ];
        } 	;
    } 	STORAGE_DEPENDENCY_INFO;

typedef struct _STORAGE_DEPENDENCY_INFO *PSTORAGE_DEPENDENCY_INFO;

typedef 
enum _GET_STORAGE_DEPENDENCY_FLAG
    {	GET_STORAGE_DEPENDENCY_FLAG_NONE	= 0,
	GET_STORAGE_DEPENDENCY_FLAG_HOST_VOLUMES	= 0x1,
	GET_STORAGE_DEPENDENCY_FLAG_DISK_HANDLE	= 0x2
    } 	GET_STORAGE_DEPENDENCY_FLAG;

DWORD __stdcall GetStorageDependencyInformation( 
    HANDLE ObjectHandle,
    GET_STORAGE_DEPENDENCY_FLAG Flags,
    ULONG StorageDependencyInfoSize,
    PSTORAGE_DEPENDENCY_INFO StorageDependencyInfo,
    PULONG SizeUsed);

typedef 
enum _GET_VIRTUAL_DISK_INFO_VERSION
    {	GET_VIRTUAL_DISK_INFO_UNSPECIFIED	= 0,
	GET_VIRTUAL_DISK_INFO_SIZE	= 1,
	GET_VIRTUAL_DISK_INFO_IDENTIFIER	= 2,
	GET_VIRTUAL_DISK_INFO_PARENT_LOCATION	= 3,
	GET_VIRTUAL_DISK_INFO_PARENT_IDENTIFIER	= 4,
	GET_VIRTUAL_DISK_INFO_PARENT_TIMESTAMP	= 5,
	GET_VIRTUAL_DISK_INFO_VIRTUAL_STORAGE_TYPE	= 6,
	GET_VIRTUAL_DISK_INFO_PROVIDER_SUBTYPE	= 7
    } 	GET_VIRTUAL_DISK_INFO_VERSION;

typedef struct _GET_VIRTUAL_DISK_INFO
    {
    GET_VIRTUAL_DISK_INFO_VERSION Version;
    union 
        {
        struct 
            {
            ULONGLONG VirtualSize;
            ULONGLONG PhysicalSize;
            ULONG BlockSize;
            ULONG SectorSize;
            } 	Size;
        GUID Identifier;
        struct 
            {
            BOOL ParentResolved;
            WCHAR ParentLocationBuffer[ 1 ];
            } 	ParentLocation;
        GUID ParentIdentifier;
        ULONG ParentTimestamp;
        VIRTUAL_STORAGE_TYPE VirtualStorageType;
        ULONG ProviderSubtype;
        } 	;
    } 	GET_VIRTUAL_DISK_INFO;

typedef struct _GET_VIRTUAL_DISK_INFO *PGET_VIRTUAL_DISK_INFO;

DWORD __stdcall GetVirtualDiskInformation( 
    HANDLE VirtualDiskHandle,
    PULONG VirtualDiskInfoSize,
    PGET_VIRTUAL_DISK_INFO VirtualDiskInfo,
    PULONG SizeUsed);

typedef 
enum _SET_VIRTUAL_DISK_INFO_VERSION
    {	SET_VIRTUAL_DISK_INFO_UNSPECIFIED	= 0,
	SET_VIRTUAL_DISK_INFO_PARENT_PATH	= 1,
	SET_VIRTUAL_DISK_INFO_IDENTIFIER	= 2
    } 	SET_VIRTUAL_DISK_INFO_VERSION;

typedef struct _SET_VIRTUAL_DISK_INFO
    {
    SET_VIRTUAL_DISK_INFO_VERSION Version;
    union 
        {
        PCWSTR ParentFilePath;
        GUID UniqueIdentifier;
        } 	;
    } 	SET_VIRTUAL_DISK_INFO;

typedef struct _SET_VIRTUAL_DISK_INFO *PSET_VIRTUAL_DISK_INFO;

DWORD __stdcall SetVirtualDiskInformation( 
    HANDLE VirtualDiskHandle,
    PSET_VIRTUAL_DISK_INFO VirtualDiskInfo);

typedef struct _VIRTUAL_DISK_PROGRESS
    {
    DWORD OperationStatus;
    ULONGLONG CurrentValue;
    ULONGLONG CompletionValue;
    } 	VIRTUAL_DISK_PROGRESS;

typedef struct _VIRTUAL_DISK_PROGRESS *PVIRTUAL_DISK_PROGRESS;

DWORD __stdcall GetVirtualDiskOperationProgress( 
    HANDLE VirtualDiskHandle,
    LPOVERLAPPED Overlapped,
    PVIRTUAL_DISK_PROGRESS Progress);

typedef 
enum _COMPACT_VIRTUAL_DISK_VERSION
    {	COMPACT_VIRTUAL_DISK_VERSION_UNSPECIFIED	= 0,
	COMPACT_VIRTUAL_DISK_VERSION_1	= 1
    } 	COMPACT_VIRTUAL_DISK_VERSION;

typedef struct _COMPACT_VIRTUAL_DISK_PARAMETERS
    {
    COMPACT_VIRTUAL_DISK_VERSION Version;
    union 
        {
        struct 
            {
            ULONG Reserved;
            } 	Version1;
        } 	;
    } 	COMPACT_VIRTUAL_DISK_PARAMETERS;

typedef struct _COMPACT_VIRTUAL_DISK_PARAMETERS *PCOMPACT_VIRTUAL_DISK_PARAMETERS;

typedef 
enum _COMPACT_VIRTUAL_DISK_FLAG
    {	COMPACT_VIRTUAL_DISK_FLAG_NONE	= 0
    } 	COMPACT_VIRTUAL_DISK_FLAG;

DWORD __stdcall CompactVirtualDisk( 
    HANDLE VirtualDiskHandle,
    COMPACT_VIRTUAL_DISK_FLAG Flags,
    PCOMPACT_VIRTUAL_DISK_PARAMETERS Parameters,
    LPOVERLAPPED Overlapped);

typedef 
enum _MERGE_VIRTUAL_DISK_VERSION
    {	MERGE_VIRTUAL_DISK_VERSION_UNSPECIFIED	= 0,
	MERGE_VIRTUAL_DISK_VERSION_1	= 1
    } 	MERGE_VIRTUAL_DISK_VERSION;

typedef struct _MERGE_VIRTUAL_DISK_PARAMETERS
    {
    MERGE_VIRTUAL_DISK_VERSION Version;
    union 
        {
        struct 
            {
            ULONG MergeDepth;
            } 	Version1;
        } 	;
    } 	MERGE_VIRTUAL_DISK_PARAMETERS;

typedef struct _MERGE_VIRTUAL_DISK_PARAMETERS *PMERGE_VIRTUAL_DISK_PARAMETERS;

typedef 
enum _MERGE_VIRTUAL_DISK_FLAG
    {	MERGE_VIRTUAL_DISK_FLAG_NONE	= 0
    } 	MERGE_VIRTUAL_DISK_FLAG;

DWORD __stdcall MergeVirtualDisk( 
    HANDLE VirtualDiskHandle,
    MERGE_VIRTUAL_DISK_FLAG Flags,
    PMERGE_VIRTUAL_DISK_PARAMETERS Parameters,
    LPOVERLAPPED Overlapped);

typedef 
enum _EXPAND_VIRTUAL_DISK_VERSION
    {	EXPAND_VIRTUAL_DISK_VERSION_UNSPECIFIED	= 0,
	EXPAND_VIRTUAL_DISK_VERSION_1	= 1
    } 	EXPAND_VIRTUAL_DISK_VERSION;

typedef struct _EXPAND_VIRTUAL_DISK_PARAMETERS
    {
    EXPAND_VIRTUAL_DISK_VERSION Version;
    union 
        {
        struct 
            {
            ULONGLONG NewSize;
            } 	Version1;
        } 	;
    } 	EXPAND_VIRTUAL_DISK_PARAMETERS;

typedef struct _EXPAND_VIRTUAL_DISK_PARAMETERS *PEXPAND_VIRTUAL_DISK_PARAMETERS;

typedef 
enum _EXPAND_VIRTUAL_DISK_FLAG
    {	EXPAND_VIRTUAL_DISK_FLAG_NONE	= 0
    } 	EXPAND_VIRTUAL_DISK_FLAG;

DWORD __stdcall ExpandVirtualDisk( 
    HANDLE VirtualDiskHandle,
    EXPAND_VIRTUAL_DISK_FLAG Flags,
    PEXPAND_VIRTUAL_DISK_PARAMETERS Parameters,
    LPOVERLAPPED Overlapped);

typedef 
enum _SURFACE_VIRTUAL_DISK_FLAG
    {	SURFACE_VIRTUAL_DISK_FLAG_NONE	= 0,
	SURFACE_VIRTUAL_DISK_FLAG_READ_ONLY	= 0x1,
	SURFACE_VIRTUAL_DISK_FLAG_NO_DRIVE_LETTER	= 0x2,
	SURFACE_VIRTUAL_DISK_FLAG_PERMANENT_LIFETIME	= 0x4,
	SURFACE_VIRTUAL_DISK_FLAG_NO_LOCAL_HOST	= 0x8
    } 	SURFACE_VIRTUAL_DISK_FLAG;

typedef 
enum _UNSURFACE_VIRTUAL_DISK_FLAG
    {	UNSURFACE_VIRTUAL_DISK_FLAG_NONE	= 0
    } 	UNSURFACE_VIRTUAL_DISK_FLAG;

#pragma warning(pop)
#else //defined(VDS_MIDL_PASS)
#include "virtdisk.h"
#endif //defined(VDS_MIDL_PASS)
#endif // _WIN32_WINNT_WIN7


extern RPC_IF_HANDLE __MIDL_itf_vdssys_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vdssys_0000_0000_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



