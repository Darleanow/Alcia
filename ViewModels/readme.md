# Why View Models

I'm too lazy to elaborate so that's just a todo BUT

## Why no Abstraction for the Models ?
We have (at the moment) only a few different fields from player and enemy,
so why haven't I made the decision to make a generic class, so I can comply to DRY
principle ?

- Because of ECS, we can't assume that an Entity will have a component that we would
want to generalize (e.g. Health).

- I also wanted to split responsabilities (SRP) for each model, so that they can both
evolve how they want without interfering with any supposed base class.

- I also think that that trying to follow DRY principle at all costs can cause over 
abstraction that would complexify the code.