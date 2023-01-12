#!/bin/bash
ls -l | awk '{print $2}' | awk 'NR==1'

