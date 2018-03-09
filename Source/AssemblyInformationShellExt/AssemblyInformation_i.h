

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Wed Feb 15 21:36:28 2012
 */
/* Compiler settings for AssemblyInformation.idl:
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
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __AssemblyInformation_i_h__
#define __AssemblyInformation_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IAILoader_FWD_DEFINED__
#define __IAILoader_FWD_DEFINED__
typedef interface IAILoader IAILoader;
#endif 	/* __IAILoader_FWD_DEFINED__ */


#ifndef __AILoader_FWD_DEFINED__
#define __AILoader_FWD_DEFINED__

#ifdef __cplusplus
typedef class AILoader AILoader;
#else
typedef struct AILoader AILoader;
#endif /* __cplusplus */

#endif 	/* __AILoader_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IAILoader_INTERFACE_DEFINED__
#define __IAILoader_INTERFACE_DEFINED__

/* interface IAILoader */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IAILoader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9A4279DB-B18B-4BA5-AA50-7314AA73B634")
    IAILoader : public IUnknown
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IAILoaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAILoader * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAILoader * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAILoader * This);
        
        END_INTERFACE
    } IAILoaderVtbl;

    interface IAILoader
    {
        CONST_VTBL struct IAILoaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAILoader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAILoader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAILoader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAILoader_INTERFACE_DEFINED__ */



#ifndef __AssemblyInformationLib_LIBRARY_DEFINED__
#define __AssemblyInformationLib_LIBRARY_DEFINED__

/* library AssemblyInformationLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_AssemblyInformationLib;

EXTERN_C const CLSID CLSID_AILoader;

#ifdef __cplusplus

class DECLSPEC_UUID("8AB81E72-CB2F-11D3-8D3B-AC2F34F1FA3C")
AILoader;
#endif
#endif /* __AssemblyInformationLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


