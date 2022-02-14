
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char const vlc_object_t ;
typedef char WCHAR ;
struct TYPE_3__ {char* lpstrElementName; int wDeviceID; scalar_t__ lpstrDeviceType; } ;
typedef TYPE_1__ MCI_OPEN_PARMS ;
typedef scalar_t__ LPCTSTR ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (int,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int,uintptr_t) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (char const*,char*,char const*) ;
 int FUNC_7 (char const*,char*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char const*,int) ;
 int FUNC_10 (char*,int ) ;

__attribute__((used)) static int FUNC_11( vlc_object_t *VAR_15, const char *VAR_16 )
{
    FUNC_2(VAR_15);
    int VAR_17 = FUNC_9( VAR_16, VAR_12 | VAR_11 );
    if( VAR_17 == -1 )
    {
        FUNC_6( VAR_15, "could not open device %s", VAR_16 );
        return VAR_13;
    }



    if( FUNC_3( VAR_17, VAR_0, 0 ) < 0
     && FUNC_0( VAR_17 ) )



    {
        FUNC_6( VAR_15, "could not eject %s", VAR_16 );
        FUNC_8( VAR_17 );
        return VAR_13;
    }
    FUNC_8( VAR_17 );
    return VAR_14;






}
