
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double splitPoint; int shrinkDict; void* shrinkDictMaxRegression; void* steps; void* d; void* k; } ;
typedef TYPE_1__ ZDICT_cover_params_t ;


 int FUNC_0 (int,char*,void*,void*,void*,unsigned int,void*) ;
 void* VAR_0 ;
 scalar_t__ FUNC_1 (char const**,char*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 void* FUNC_3 (char const**) ;

__attribute__((used)) static unsigned FUNC_4(const char* VAR_1, ZDICT_cover_params_t* VAR_2)
{
    FUNC_2(VAR_2, 0, sizeof(*VAR_2));
    for (; ;) {
        if (FUNC_1(&VAR_1, "k=")) { VAR_2->k = FUNC_3(&VAR_1); if (VAR_1[0]==',') { VAR_1++; continue; } else break; }
        if (FUNC_1(&VAR_1, "d=")) { VAR_2->d = FUNC_3(&VAR_1); if (VAR_1[0]==',') { VAR_1++; continue; } else break; }
        if (FUNC_1(&VAR_1, "steps=")) { VAR_2->steps = FUNC_3(&VAR_1); if (VAR_1[0]==',') { VAR_1++; continue; } else break; }
        if (FUNC_1(&VAR_1, "split=")) {
          unsigned VAR_3 = FUNC_3(&VAR_1);
          VAR_2->splitPoint = (double)VAR_3 / 100.0;
          if (VAR_1[0]==',') { VAR_1++; continue; } else break;
        }
        if (FUNC_1(&VAR_1, "shrink")) {
          VAR_2->shrinkDictMaxRegression = VAR_0;
          VAR_2->shrinkDict = 1;
          if (VAR_1[0]=='=') {
            VAR_1++;
            VAR_2->shrinkDictMaxRegression = FUNC_3(&VAR_1);
          }
          if (VAR_1[0]==',') {
            VAR_1++;
            continue;
          }
          else break;
        }
        return 0;
    }
    if (VAR_1[0] != 0) return 0;
    FUNC_0(4, "cover: k=%u\nd=%u\nsteps=%u\nsplit=%u\nshrink%u\n", VAR_2->k, VAR_2->d, VAR_2->steps, (unsigned)(VAR_2->splitPoint * 100), VAR_2->shrinkDictMaxRegression);
    return 1;
}
