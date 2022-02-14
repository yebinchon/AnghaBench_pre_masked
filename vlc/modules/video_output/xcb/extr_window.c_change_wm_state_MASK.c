
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int* data32; } ;
struct TYPE_9__ {int format; TYPE_2__ data; int type; int window; int response_type; } ;
typedef TYPE_3__ xcb_client_message_event_t ;
typedef int xcb_atom_t ;
struct TYPE_7__ {int xid; } ;
struct TYPE_10__ {TYPE_1__ handle; TYPE_5__* sys; } ;
typedef TYPE_4__ vout_window_t ;
struct TYPE_11__ {int root; int conn; int wm_state; } ;
typedef TYPE_5__ vout_window_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int,char const*) ;

__attribute__((used)) static void FUNC_1 (vout_window_t *VAR_5, bool VAR_6, xcb_atom_t VAR_7)
{
    vout_window_sys_t *VAR_8 = VAR_5->sys;

    xcb_client_message_event_t VAR_9 = {
         .response_type = VAR_2,
         .format = 32,
         .window = VAR_5->handle.xid,
         .type = VAR_8->wm_state,
    };

    VAR_9.data.data32[0] = VAR_6 ? VAR_0 : VAR_1;
    VAR_9.data.data32[1] = VAR_7;
    VAR_9.data.data32[2] = 0;
    VAR_9.data.data32[3] = 1;


    FUNC_0 (VAR_8->conn, 0, VAR_8->root,
                    VAR_3 |
                    VAR_4,
                    (const char *)&VAR_9);
}
