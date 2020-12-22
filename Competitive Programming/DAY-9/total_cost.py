no_of_sweaters=3
costsw=68
no_of_computergames=1
costcg=75
no_of_bracelets=2
costb=43
rebate=10
refunded=1;
total=((no_of_sweaters*costsw)+(no_of_computergames*(costcg-rebate))+(no_of_bracelets*costb)-(refunded*costb))
print("Total cost is ",total)
