
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t uint_t ;
struct TYPE_11__ {scalar_t__ pd_prov_type; int pd_flags; } ;
typedef TYPE_1__ kcf_provider_desc_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 size_t VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_1__**,char*,size_t) ;
 int FUNC_5 (size_t,TYPE_1__**) ;
 char* FUNC_6 (size_t,int ) ;
 int FUNC_7 (TYPE_1__**,size_t) ;
 TYPE_1__** FUNC_8 (size_t,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 TYPE_1__** VAR_6 ;
 int VAR_7 ;

int
FUNC_11(uint_t *VAR_8, kcf_provider_desc_t ***VAR_9,
    boolean_t VAR_10)
{
 kcf_provider_desc_t *VAR_11;
 kcf_provider_desc_t **VAR_12 = ((void*)0);
 char *VAR_13;
 uint_t VAR_14 = 0;
 uint_t VAR_15, VAR_16;
 int VAR_17 = VAR_3;
 size_t VAR_18, VAR_19;


 FUNC_9(&VAR_7);
 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
  if ((VAR_11 = VAR_6[VAR_15]) != ((void*)0) &&
      ((VAR_11->pd_prov_type == VAR_1 &&
      (VAR_11->pd_flags & VAR_0) == 0) ||
      VAR_11->pd_prov_type == VAR_2)) {
   if (FUNC_2(VAR_11) ||
       (VAR_10 && FUNC_1(VAR_11))) {
    VAR_14++;
   }
  }
 }
 FUNC_10(&VAR_7);

 if (VAR_14 == 0)
  goto out;

 VAR_18 = VAR_14 * sizeof (kcf_provider_desc_t *);
again:
 VAR_12 = FUNC_8(VAR_18, VAR_5);


 VAR_13 = (char *)&VAR_12[VAR_14-1];

 FUNC_9(&VAR_7);

 for (VAR_15 = 0, VAR_16 = 0; VAR_15 < VAR_4; VAR_15++) {
  if ((VAR_11 = VAR_6[VAR_15]) != ((void*)0) &&
      ((VAR_11->pd_prov_type == VAR_1 &&
      (VAR_11->pd_flags & VAR_0) == 0) ||
      VAR_11->pd_prov_type == VAR_2)) {
   if (FUNC_2(VAR_11) ||
       (VAR_10 && FUNC_1(VAR_11))) {
    if ((char *)&VAR_12[VAR_16] > VAR_13) {
     FUNC_10(&VAR_7);
     FUNC_5(VAR_14, VAR_12);
     VAR_18 = VAR_18 << 1;
     VAR_14 = VAR_14 << 1;
     goto again;
    }
    VAR_12[VAR_16++] = VAR_11;
    FUNC_3(VAR_11);
   }
  }
 }
 FUNC_10(&VAR_7);

 VAR_19 = VAR_16 * sizeof (kcf_provider_desc_t *);
 VAR_14 = VAR_16;
 FUNC_0(VAR_19 <= VAR_18);


 if (VAR_19 < VAR_18) {
  char *VAR_20 = ((void*)0);

  if (VAR_19 > 0) {
   VAR_20 = FUNC_6(VAR_19, VAR_5);
   FUNC_4(VAR_12, VAR_20, VAR_19);
  }
  FUNC_7(VAR_12, VAR_18);
  VAR_12 = (kcf_provider_desc_t **)VAR_20;
 }
out:
 *VAR_8 = VAR_14;
 *VAR_9 = VAR_12;
 return (VAR_17);
}
