
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct access_sys {scalar_t__ error_status; int eof; int smb2fh; int smb2; } ;
struct TYPE_4__ {struct access_sys* p_sys; } ;
typedef TYPE_1__ stream_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_2(stream_t *VAR_3, uint64_t VAR_4)
{
    struct access_sys *VAR_5 = VAR_3->p_sys;

    if (VAR_5->error_status != 0)
        return VAR_1;

    if (FUNC_1(VAR_5->smb2, VAR_5->smb2fh, VAR_4, VAR_0, ((void*)0)) < 0)
    {
        FUNC_0(VAR_3, "smb2_seek_async", 1);
        return VAR_1;
    }
    VAR_5->eof = 0;

    return VAR_2;
}
