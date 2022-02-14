
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int szData ;
typedef int WCHAR ;
struct TYPE_3__ {int DeviceId; int VendorId; } ;
typedef int LSTATUS ;
typedef int LPBYTE ;
typedef int * HKEY ;
typedef TYPE_1__ DXGI_ADAPTER_DESC ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ,int ,int **) ;
 int FUNC_2 (int *,int ,int *,int *,int ,int*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int,int ,int,...) ;
 int FUNC_5 (int *,char*,int,int *,int *) ;
 int FUNC_6 (int *,char*,int,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int *,int ) ;

__attribute__((used)) static HKEY FUNC_9(vlc_object_t *VAR_3, DXGI_ADAPTER_DESC *VAR_4)
{
    HKEY VAR_5;
    WCHAR VAR_6[128];
    WCHAR VAR_7[256], VAR_8[256];
    DWORD VAR_9 = 256;
    LSTATUS VAR_10;

    FUNC_4(VAR_8, 256, FUNC_3("pci\\ven_%04x&dev_%04x"), VAR_4->VendorId, VAR_4->DeviceId);
    for (int VAR_11=0;;VAR_11++)
    {
        FUNC_4(VAR_6, 128, FUNC_3("SYSTEM\\CurrentControlSet\\Control\\Class\\{4d36e968-e325-11ce-bfc1-08002be10318}\\%04d"), VAR_11);
        VAR_10 = FUNC_1(VAR_1, VAR_6, 0, VAR_2, &VAR_5);
        if ( VAR_10 != VAR_0 )
        {
            FUNC_6(VAR_3, "failed to read the %d Display Adapter registry key (%ld)", VAR_11, VAR_10);
            return ((void*)0);
        }

        VAR_9 = sizeof(VAR_7);
        VAR_10 = FUNC_2( VAR_5, FUNC_3("MatchingDeviceId"), ((void*)0), ((void*)0), (LPBYTE) &VAR_7, &VAR_9 );
        if ( VAR_10 == VAR_0 ) {
            if (FUNC_8(VAR_8, VAR_7, FUNC_7(VAR_8)) == 0)
                return VAR_5;
            FUNC_5(VAR_3, "different %d device %ls vs %ls", VAR_11, VAR_8, VAR_7);
        }
        else
            FUNC_6(VAR_3, "failed to get the %d MatchingDeviceId (%ld)", VAR_11, VAR_10);

        FUNC_0(VAR_5);
    }
    return ((void*)0);
}
