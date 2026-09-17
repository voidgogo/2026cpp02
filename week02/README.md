```mermaid

classDiagram

&nbsp;   direction BT



&nbsp;   class Beverage {

&nbsp;       -string name

&nbsp;       -int unitPrice

&nbsp;       +Beverage(string name, int unitPrice)

&nbsp;       +~Beverage()

&nbsp;       +getPrice() int

&nbsp;   }



&nbsp;   class Company {

&nbsp;       -string name

&nbsp;       -string tel

&nbsp;       +Company(string name, string tel)

&nbsp;       +~Company()

&nbsp;       +print() void

&nbsp;   }



&nbsp;   class Receipt {

&nbsp;       -int receiptNumber

&nbsp;       -int receiptTotal

&nbsp;       -Company company

&nbsp;       +Receipt(int receiptNumber, Company company)

&nbsp;       +~Receipt()

&nbsp;       +add(int quantity, Beverage beverage) void

&nbsp;       +print() void

&nbsp;   }



&nbsp;   %% 관계 설정

&nbsp;   Receipt ..> Beverage : Dependency (use-a)

&nbsp;   Receipt o-- Company : Aggregation (has-a)

```



