var recipe = {
    title: "Date Pudding",
    servings: 1,
    ingredients: ["Dates", "Water", "Avocados", "Cocoa Powder"]
};

fill(26, 26, 26);
textSize(20);
text(recipe.title, 10, 23);
text("Serves: " + recipe.servings, 10, 55);
text("Ingredients: " + recipe.ingredients, 10, 85);
