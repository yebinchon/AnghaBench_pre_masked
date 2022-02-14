
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int ngx_int_t ;
struct TYPE_5__ {int data; } ;
struct TYPE_6__ {TYPE_1__ name; int log; } ;
struct TYPE_7__ {TYPE_2__ file; } ;
typedef TYPE_3__ ngx_http_mp4_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_mp4_file_t *VAR_2, uint64_t VAR_3)
{
    FUNC_0(VAR_1, VAR_2->file.log, 0,
                  "\"%s\" mp4 compressed moov atom (cmov) is not supported",
                  VAR_2->file.name.data);

    return VAR_0;
}
