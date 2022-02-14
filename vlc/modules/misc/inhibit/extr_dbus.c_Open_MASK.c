
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_11__ {int inhibit; TYPE_2__* p_sys; } ;
typedef TYPE_1__ vlc_inhibit_t ;
struct TYPE_12__ {unsigned int api; int * conn; scalar_t__ cookie; int * pending; } ;
typedef TYPE_2__ vlc_inhibit_sys_t ;
struct TYPE_13__ {int message; } ;
typedef TYPE_3__ DBusError ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int * VAR_6 ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_2__* FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*,char*,int ) ;
 int FUNC_8 (TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10 (vlc_object_t *VAR_7)
{
    vlc_inhibit_t *VAR_8 = (vlc_inhibit_t *)VAR_7;
    vlc_inhibit_sys_t *VAR_9 = FUNC_6 (sizeof (*VAR_9));
    if (FUNC_9(VAR_9 == ((void*)0)))
        return VAR_4;

    DBusError VAR_10;
    FUNC_4(&VAR_10);

    VAR_9->conn = FUNC_1 (VAR_0, &VAR_10);
    if (VAR_9->conn == ((void*)0))
    {
        FUNC_8(VAR_8, "cannot connect to session bus: %s", VAR_10.message);
        FUNC_3(&VAR_10);
        FUNC_5(VAR_9);
        return VAR_3;
    }

    VAR_9->pending = ((void*)0);
    VAR_9->cookie = 0;
    VAR_8->p_sys = VAR_9;

    for (unsigned VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
    {
        if (FUNC_2(VAR_9->conn, VAR_6[VAR_11], ((void*)0)))
        {
            FUNC_7(VAR_8, "found service %s", VAR_6[VAR_11]);
            VAR_9->api = VAR_11;
            VAR_8->inhibit = VAR_1;
            return VAR_5;
        }

        FUNC_7(VAR_8, "cannot find service %s", VAR_6[VAR_11]);
    }

    FUNC_0(VAR_7);
    return VAR_3;
}
