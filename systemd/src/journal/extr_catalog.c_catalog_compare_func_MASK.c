
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * bytes; } ;
struct TYPE_6__ {int language; TYPE_1__ id; } ;
typedef TYPE_2__ CatalogItem ;


 int FUNC_0 (int ,int ) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(const CatalogItem *VAR_0, const CatalogItem *VAR_1) {
        unsigned VAR_2;
        int VAR_3;

        for (VAR_2 = 0; VAR_2 < FUNC_1(VAR_1->id.bytes); VAR_2++) {
                VAR_3 = FUNC_0(VAR_0->id.bytes[VAR_2], VAR_1->id.bytes[VAR_2]);
                if (VAR_3 != 0)
                        return VAR_3;
        }

        return FUNC_2(VAR_0->language, VAR_1->language);
}
