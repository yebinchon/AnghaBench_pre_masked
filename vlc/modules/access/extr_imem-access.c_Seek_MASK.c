
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_5__ {scalar_t__ (* seek_cb ) (int ,int ) ;int opaque; } ;
typedef TYPE_2__ access_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(stream_t *VAR_2, uint64_t VAR_3)
{
    access_sys_t *VAR_4 = VAR_2->p_sys;

    FUNC_0(VAR_4->seek_cb != ((void*)0));

    if (VAR_4->seek_cb(VAR_4->opaque, VAR_3) != 0)
        return VAR_0;
   return VAR_1;
}
