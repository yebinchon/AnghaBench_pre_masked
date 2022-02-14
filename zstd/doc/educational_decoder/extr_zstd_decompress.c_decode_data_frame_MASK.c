
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ len; } ;
typedef TYPE_2__ ostream_t ;
typedef int istream_t ;
struct TYPE_9__ {scalar_t__ frame_content_size; } ;
struct TYPE_11__ {TYPE_1__ header; } ;
typedef TYPE_3__ frame_context_t ;
typedef int dictionary_t ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_3__*,TYPE_2__* const,int * const) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int * const,int const* const) ;

__attribute__((used)) static void FUNC_4(ostream_t *const VAR_0, istream_t *const VAR_1,
                              const dictionary_t *const VAR_2) {
    frame_context_t VAR_3;


    FUNC_3(&VAR_3, VAR_1, VAR_2);

    if (VAR_3.header.frame_content_size != 0 &&
        VAR_3.header.frame_content_size > VAR_0->len) {
        FUNC_0();
    }

    FUNC_1(&VAR_3, VAR_0, VAR_1);

    FUNC_2(&VAR_3);
}
