
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int seccomp; int sysctl; int network_namespace_path; int n_extra_nodes; int extra_nodes; int supplementary_gids; int properties; int slice; int n_oci_hooks_poststop; int oci_hooks_poststop; int n_oci_hooks_poststart; int oci_hooks_poststart; int n_oci_hooks_prestart; int oci_hooks_prestart; int root; int bundle; int n_custom_mounts; int custom_mounts; int expose_ports; int network_zone; int network_bridge; int network_veth_extra; int network_ipvlan; int network_macvlan; int network_interfaces; int cpu_set; int hostname; int rlimit; int syscall_blacklist; int syscall_whitelist; int working_directory; int pivot_root_old; int pivot_root_new; int user; int environment; int parameters; } ;
typedef TYPE_1__ Settings ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 TYPE_1__* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

Settings* FUNC_11(Settings *VAR_0) {
        if (!VAR_0)
                return ((void*)0);

        FUNC_10(VAR_0->parameters);
        FUNC_10(VAR_0->environment);
        FUNC_4(VAR_0->user);
        FUNC_4(VAR_0->pivot_root_new);
        FUNC_4(VAR_0->pivot_root_old);
        FUNC_4(VAR_0->working_directory);
        FUNC_10(VAR_0->syscall_whitelist);
        FUNC_10(VAR_0->syscall_blacklist);
        FUNC_7(VAR_0->rlimit);
        FUNC_4(VAR_0->hostname);
        FUNC_0(&VAR_0->cpu_set);

        FUNC_10(VAR_0->network_interfaces);
        FUNC_10(VAR_0->network_macvlan);
        FUNC_10(VAR_0->network_ipvlan);
        FUNC_10(VAR_0->network_veth_extra);
        FUNC_4(VAR_0->network_bridge);
        FUNC_4(VAR_0->network_zone);
        FUNC_3(VAR_0->expose_ports);

        FUNC_1(VAR_0->custom_mounts, VAR_0->n_custom_mounts);

        FUNC_4(VAR_0->bundle);
        FUNC_4(VAR_0->root);

        FUNC_5(VAR_0->oci_hooks_prestart, VAR_0->n_oci_hooks_prestart);
        FUNC_5(VAR_0->oci_hooks_poststart, VAR_0->n_oci_hooks_poststart);
        FUNC_5(VAR_0->oci_hooks_poststop, VAR_0->n_oci_hooks_poststop);

        FUNC_4(VAR_0->slice);
        FUNC_8(VAR_0->properties);

        FUNC_4(VAR_0->supplementary_gids);
        FUNC_2(VAR_0->extra_nodes, VAR_0->n_extra_nodes);
        FUNC_4(VAR_0->network_namespace_path);

        FUNC_10(VAR_0->sysctl);





        return FUNC_6(VAR_0);
}
