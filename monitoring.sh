#!bin/bash

ram_status()
{
    keyw="Mem"
    flag=-m
    read -r output <<< $(free $flag | grep $keyw | tr -d "Mem:" | na4r 1)
    printf "#Memory Usage: "
    echo $output
}

ram_status

_info()
{
    un_flag="--all"
    printf "#Architecture: $(uname $un_flag)\n"
}

_info


_cpu_p()
{
    str_cpu="CPU(s):"
    #str_space=" "
    printf "#CPU physical : $(lscpu | grep -m1 $str_cpu | tr -d $str_cpu | tr -d " ")\n"
}
_cpu_p


_v_cpu()
{
    printf "#vCPU : $(nproc $un_flag)\n"
}

_v_cpu

