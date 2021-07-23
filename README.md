

# DS-Traversal

 Linked List and Tree Traversal in Memory in Proteus

# **Digisim PS1**

![image](https://user-images.githubusercontent.com/56964828/126819963-3b8937ec-fd37-4d3c-a496-16cdfb6b0a42.png)

**Traversing List**

![image](https://user-images.githubusercontent.com/56964828/126820020-0301862c-921a-470e-9644-1f1cdc130401.png)

\1.    The clock is sent to T flip flop and the frequency of clock is halved. 

\2.    When the reset is used to set the half clock to 1.

\3.    Using mux either B(Current address +1 ) is selected to get the address of the node or mux chooses the value at the current address to traverse to the next node.

\4.    Due to half clocked pulse(time period double ), each output of mux gets a positive edge oof clock to update the register.

5.Overall :

| Output of half clock | Output of Address     |
| -------------------- | --------------------- |
| 0                    | Address of next node  |
| 1                    | Value of current Node |

 

**Comparing and storing the output**

![image](https://user-images.githubusercontent.com/56964828/126820035-ad324174-e44b-457f-a440-a8b160f70483.png)

The output of rom is subtracted from harshad’s holdings and compared with the current difference stored in the register.

One of the following things will make the register load the value:

·     Conditions:

a.    The output of rom is not (111111111 and the half clock is at 1(means the rom is showing the value )).

b.   The number is less than holdings ,i.e. the carry of subtractor is 1.

c.    The difference calculated is less that the previous value.

·     The output of rom is the value at first node ,i.e. the address in 00000000.

Also using the same load line , clk and reset .The address of current node is also stored in registers. 

 

**8-bit Binary to 3 digit BCD display**

Reference: https://www.youtube.com/watch?v=kusZDF3IfBA

![image](https://user-images.githubusercontent.com/56964828/126820063-b42da508-84e6-46e3-9155-f4aa56c746ae.png)

![image](https://user-images.githubusercontent.com/56964828/126820083-9d20589b-5c27-4745-99cc-8ebf48e03615.png)

In the child sheet 4 bits are taken as input and if the output is strictly greater than 4 then 3 is added to the current number and the output is sent back.

Using the series of this circuit we get the desired output.

 

The 10(P9 P8 P7 P6 P5 P4 P3 P2 P1 P0) bits obtained are sent to bcd to bcd disply decoder to display the output.

| Hundredths Place | BCD decoder 1 | 0 0 P9 P8   |
| ---------------- | ------------- | ----------- |
| Tenths Place     | BCD decoder 2 | P7 P6 P5 P4 |
| Ones Place       | BCD decoder 3 | P3 P2 P1 P0 |

 

**TEST CASE USED**

![image](https://user-images.githubusercontent.com/56964828/126820091-a4f350fb-12d6-4460-8b80-ff3fe315cf88.png)
![image](https://user-images.githubusercontent.com/56964828/126820101-e700d2e4-970e-499b-9844-5ba55424284f.png)
![image](https://user-images.githubusercontent.com/56964828/126820110-9d1b1651-9c60-44c6-8a5c-e40ba8f2880b.png)
![image](https://user-images.githubusercontent.com/56964828/126820403-b883fc90-46c7-4349-b243-bdc7b1aa49a2.png)
![image](https://user-images.githubusercontent.com/56964828/126820418-0d4bbb6d-e1ca-4dd5-86aa-dc09cabd398c.png)
![image](https://user-images.githubusercontent.com/56964828/126820429-452e249d-ef49-494a-9a23-9b17c7c82188.png)
![image](https://user-images.githubusercontent.com/56964828/126820475-811106d5-38e4-4c43-a4e1-7ef756cf901a.png)

**Bill Of Materials For  ps_one_CRUD.DSN**  

 

```
Bill Of Materials
=================
Design:   C:\Users\A-One\Documents\GitHub\DS-Traversal\data\ps1\sol_bug_v1.0.DSN
Doc. no.: <NONE>
Revision: <NONE>
Author:   <NONE>
Created:  10/04/21
Modified: 11/04/21

QTY  PART-REFS           VALUE               CODE                          
---  ---------           -----               ----                          
Integrated Circuits
-------------------
4    U1,U9,U15,U17       AND                                               
6    U2-U4,U10,U18,U19   74179                                             
4    U5,U6,U11,U22       74283                                             
1    U7                  2732                                              
1    U8                  7474                                              
9    U12,U23,U26-U32     XOR                                               
1    U13                 AND_8                                             
2    U14,U16             NOT                                               
2    U20,U21             7485                                              
2    U24,U25             74HC157                                           
```



# Digisim PS2

![image](https://user-images.githubusercontent.com/56964828/126821654-3b8d641f-8849-4087-905e-8fe37932bfb7.png)

Test Case:

![image](https://user-images.githubusercontent.com/56964828/126821671-e296deca-5efc-4c0e-9f75-57314724ab8d.png)
![image](https://user-images.githubusercontent.com/56964828/126821686-6186eb5f-5ed9-4c93-acf4-88eacf469109.png)

Start:

 

| Queue     | Address | Front       |
| --------- | ------- | ----------- |
| -         | 0       | 0           |
| 255       | 1       | 0           |
| 3,255     | 2       | 1           |
| 6,3       | 255     | 1           |
| 255,6,3   | 3       | 2           |
| 255,6     | 4       | 1           |
| 255,6     | 5       | 1           |
| 255,6     | 6       | 1           |
| 255       | 7       | 0           |
| 9,255     | 8       | 1           |
| 9         | 255     | 0           |
| 255,9     | 9       | 1           |
| 255       | 10      | 0           |
| 12,255    | 11      | 1           |
| 15,12,255 | 255     | 2           |
| 255,15,12 | 12      | 2           |
| 255,15    | 13      | 1           |
| 255,15    | 14      | 1           |
| 255,15    | 15      | 1           |
| 255       | 16      | 0           |
| 18,255    | 17      | 1           |
| 21,18,255 | 255     | 2           |
| 255,21,18 | 18      | 2           |
| 255,21    | 19      | 1           |
| 24,255,21 | 20      | 2           |
| 24,255,21 | 21      | 2           |
| 24,255    | 22      | 1           |
| 24,255    | 23      | 1           |
| 24        | 255     | 0           |
| 255,24    | 24      | 1           |
| 255       | 25      | 0           |
| 255       | 26      | 0 **(END)** |

 

![image](https://user-images.githubusercontent.com/56964828/126821700-5f5a3d79-cefd-4ac2-8292-7dd14e745004.png)

Circuit Explanation:

psuedocode

```C++
// BFS 255 wla concept
#include    <bits\stdc++.h>
using namespace std;
int main(){
    int info[]= {116,10,3,100,7,26,55,97,14,255,111,19,255,68,84,255,255,177,81,90,255,255,2,3,4,5,93,255,255,9,9};

    int ans = 1e5,tpc;
    cin>>tpc;
    queue<int> q;
    q.push(0);
    q.push(255);
    int dist = 0;
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        if(curr == 255){
            dist++;
            if(!q.empty())
                q.push(255);    
            continue;
        }
        
        cout<<curr<<"= curr\n";
        cout<<dist<<" = its dist \n";
        ans = min(ans,info[curr] + dist*tpc);
        if(info[curr+1]!=255)
            q.push(info[curr+1]);
        if(info[curr+2]!=255)
            q.push(info[curr+2]);   
    }
    cout<<ans<<"=ans\n";
    return 0;
}

```

Explanation : Here we push 255 to queue at end of each level , when the popped element from queue == 255 , then we increment the value of TPC , to match the value dist*tpc.

CLOCK:

![image](https://user-images.githubusercontent.com/56964828/126821709-0f9cce82-b044-45ba-aec9-c49a4b88e3b5.png)

Its a down counter i.e the values shown are 11 , 10, 01 in this order. 

ROM:

![image](https://user-images.githubusercontent.com/56964828/126821718-8d94f973-5f60-4180-a6dd-758b88f4d6eb.png)

The address is taken at 11 we add 1 to address , at 10 we add 1 to address and at 01 we take the node at front of queue.

 

Front of Queue:

![image](https://user-images.githubusercontent.com/56964828/126821732-6ff4dd68-8d04-4887-8ea7-307cb5ecce63.png)

The front position of queue is stored in a 4 bit register and based on current address and mod 3 clock output it is incremented or decremented.

Queue:

![image](https://user-images.githubusercontent.com/56964828/126821744-5be0c915-0751-47f8-982e-aa422f8bea29.png)

The queue is basically a line of registers , with a load line for parallel right shift and MUX connected to select values via select lines FRONT0 ,FRONT 1, FRONT 2.

 

TPC:

![image](https://user-images.githubusercontent.com/56964828/126821751-73cd9975-e07d-44cb-a849-1f948e3260aa.png)

Whenever we receive an address of 255 from queue , it means that a level has been traversed and TPC is incremented in the current value .

The stored value of TPC is then used to add to the value of node , that is used to calculate the expense.



```
Bill Of Materials
=================
Design:   C:\Users\A-One\Documents\GitHub\DS-Traversal\data\ps2\ps2v1.1.DSN
Doc. no.: <NONE>
Revision: <NONE>
Author:   <NONE>
Created:  15/04/21
Modified: 18/04/21

QTY  PART-REFS           VALUE               CODE                          
---  ---------           -----               ----                          
Integrated Circuits
-------------------
4    U1,U2,U74,U75       74HC157                                           
3    U3,U8,U79           NAND_8                                            
6    U4,U7,U20,U23,      AND                                               
     U77,U78
11   U5,U21,U22,U34,U71, NOT                                               
     U76,U81,U84,U85,
     U87,U88
1    U6                  2732                                              
23   U9,U10,U13,U14,     74179                                             
     U37-U40,U44-U47,
     U52-U55,U59-U62,
     U73,U90,U91
7    U11,U12,U15,U16,    74283                                             
     U29,U30,U69
3    U17,U95,U96         AND_3                                             
3    U18,U82,U83         OR_3                                              
5    U19,U26-U28,U68     XOR                                               
2    U24,U25             AND_4                                             
2    U31,U33             7474                                              
1    U32                 4077                                              
14   U35,U36,U41-U43,    74157                                             
     U48-U51,U56-U58,
     U63,U64
2    U65,U66             7485                                              
5    U67,U70,U80,U86,U89 OR                                                
1    U72                 OR_8                                              

Diodes
------
2    D1,D2               74179                                             
1    D3                  LED-BIBY                                          
```

Software Used :

Proteus 7 Professional
