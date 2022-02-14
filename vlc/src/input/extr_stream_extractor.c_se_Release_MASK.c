
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream_extractor_private {int object; scalar_t__ source; scalar_t__ module; int (* pf_clean ) (struct stream_extractor_private*) ;} ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct stream_extractor_private*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4( struct stream_extractor_private* VAR_0 )
{
    if( VAR_0->pf_clean )
        VAR_0->pf_clean( VAR_0 );

    if( VAR_0->module )
    {
        FUNC_0( VAR_0->object, VAR_0->module );

        if( VAR_0->source )
            FUNC_3( VAR_0->source );
    }

    FUNC_2(VAR_0->object);
}
