
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_5__ {int SubstituteNameLength; char* PathBuffer; int SubstituteNameOffset; } ;
struct TYPE_6__ {int ReparseTag; TYPE_1__ SymbolicLinkReparseBuffer; } ;
typedef TYPE_2__ REPARSE_DATA_BUFFER ;
typedef char* LPWSTR ;
typedef char* LPCWSTR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char*,int ,int,int *,int ,int,int *) ;
 int FUNC_3 (scalar_t__,int ,int *,int ,TYPE_2__*,int,int*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_11 ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,int,char*,int) ;

DWORD FUNC_10(LPCWSTR VAR_15, LPCWSTR VAR_16, LPWSTR VAR_17, DWORD VAR_18)
{
 HANDLE VAR_19;
 DWORD VAR_20 = VAR_12;
 REPARSE_DATA_BUFFER* VAR_21;
 DWORD VAR_22, VAR_23 = 0;
 DWORD VAR_24;
 BOOL VAR_25;
 WCHAR VAR_26[2*VAR_13];

 FUNC_8(VAR_26, VAR_15);
 FUNC_7(VAR_26);

 if (VAR_16 != ((void*)0))
  FUNC_0(VAR_26, VAR_16);

 VAR_19 = FUNC_2(VAR_26, VAR_2, VAR_4|VAR_5|VAR_3, ((void*)0), VAR_14, VAR_0 | VAR_1, ((void*)0));
 if (VAR_19 == VAR_7)
  return VAR_9;


 VAR_21 = (REPARSE_DATA_BUFFER*)FUNC_5(VAR_11, VAR_20);


 VAR_25 = FUNC_3(VAR_19, VAR_6, ((void*)0), 0, VAR_21, VAR_20, &VAR_22, ((void*)0));

 FUNC_1(VAR_19);

 if (!VAR_25)
 {
  FUNC_6(VAR_21);
  return VAR_9;
 }

 VAR_24 = VAR_21->ReparseTag;

 if (FUNC_4(VAR_21->ReparseTag) &&
  (VAR_21->ReparseTag == VAR_8 || VAR_21->ReparseTag == VAR_10)
  )
 {
  VAR_23 = VAR_21->SymbolicLinkReparseBuffer.SubstituteNameLength / sizeof(WCHAR);

  if (VAR_23 < VAR_18)
  {
   LPWSTR VAR_27 = &VAR_21->SymbolicLinkReparseBuffer.PathBuffer[VAR_21->SymbolicLinkReparseBuffer.SubstituteNameOffset / sizeof(WCHAR)];
   if (VAR_27[0] == '?' && VAR_27[1] == '\\')
   {
    VAR_27 += 2;
    VAR_23 -= 2;
   }
   FUNC_9(VAR_17, VAR_13, VAR_27, VAR_23);
   VAR_17[VAR_23] = 0;
  }
  else
  {
   FUNC_8(VAR_17, L"<symbol link reference too long>");
  }
 }

 FUNC_6(VAR_21);
 return VAR_24;
}
