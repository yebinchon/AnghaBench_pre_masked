
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct decoder_owner {int cbs_userdata; TYPE_1__* cbs; } ;
typedef int input_attachment_t ;
typedef int decoder_t ;
struct TYPE_2__ {int (* get_attachments ) (int *,int ***,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct decoder_owner* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ***,int ) ;

__attribute__((used)) static int FUNC_2( decoder_t *VAR_3,
                                       input_attachment_t ***VAR_4,
                                       int *VAR_5 )
{
    struct decoder_owner *VAR_6 = FUNC_0( VAR_3 );
    if (!VAR_6->cbs || !VAR_6->cbs->get_attachments)
        return VAR_1;

    int VAR_7 = VAR_6->cbs->get_attachments(VAR_3, VAR_4,
                                            VAR_6->cbs_userdata);
    if (VAR_7 < 0)
        return VAR_0;
    *VAR_5 = VAR_7;
    return VAR_2;
}
