
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ofCode; int mlCode; int llCode; int litStart; int sequencesStart; int maxNbLit; int maxNbSeq; } ;
typedef TYPE_1__ seqStore_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_1(seqStore_t *VAR_7) {
    VAR_7->maxNbSeq = VAR_0;
    VAR_7->maxNbLit = VAR_6;
    VAR_7->sequencesStart = VAR_1;
    VAR_7->litStart = VAR_2;
    VAR_7->llCode = VAR_3;
    VAR_7->mlCode = VAR_4;
    VAR_7->ofCode = VAR_5;

    FUNC_0(VAR_7);
}
