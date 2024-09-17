# PHA Mobile hydraulic aggregate (Pokretni hidraulični agregat)

## Introduction

During my internship in the Mihajlo Pupin Institute, I worked on a model of their product from headline [description of product](https://github.com/Dovlane/imp-pha/blob/main/IMP-PHA-SR.pdf).

## About the project

This program was designed to simulate the operation of the MHP (Mobile Hydraulic Power Unit). It consists of three subsystems:
<ol>
<li>An accumulator with a relief and overflow valve (7.0 on the actual MHP diagram).</li>
<li>A pump with its relief valve (1.0 and 2.0).</li> 
<li>A distributor with a cylinder and an accumulator (slightly different on the actual diagram, but essentially 3.0 and 6.0).</li>  
</ol>

Two PID controllers are used for the regulation and control of this system. One is used to maintain the pump pressure through the torque applied to the shaft (4). The other controls the position of the cylinder piston by managing the position of the sliding valve (5).
