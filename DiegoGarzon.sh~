#!/bin/bash
#SBATCH -J myjob
#SBATCH -o myjob.o%j
#SBATCH -e myjob.e%j
#SBATCH –N 2
#SBATCH -n 2
#SBATCH -p development
#SBATCH -t 01:30:00 #


ibrun make
